#include "gtest/gtest.h"
#include "../src/TLight.h"
#include "../src/Light_Bulbs.h"

class TestClass : public ::testing::Test {
  private:
  enum {THREE=3};
  public:
  TLight*pthreelights[THREE];
  protected:
    TestClass() {
      // before each test
      pthreelights[0]=new Red(TL::LIGHT::red);
      pthreelights[1]=new Yellow ();
      pthreelights[2]=new Green(TL::LIGHT::green);
    }

    virtual ~TestClass() {
      // after each test
      for (int i=0; i<THREE; i++){
        delete pthreelights[i];
      }

    }

    virtual void SetUp() {
      // if the constructor is not enough, called before each test
      for (int i=0; i<THREE; i++){
        pthreelights[i]->setMode(TL::MODE::on);
      }
    }

    virtual void TearDown() {
      // if the destructor is not enough, called after each test
    }
   
};

TEST_F(TestClass, all_on) {
  for (int i=0; i<3; i++){
  EXPECT_EQ(TL::MODE::on, pthreelights[i]->getMode());
  }
}
TEST_F(TestClass, all_off) {
  for (int i=0; i<3; i++){
  pthreelights[i]->setMode(TL::MODE::off);
  }
for (int i=0; i<3; i++){
  EXPECT_EQ(TL::MODE::off, pthreelights[i]->getMode());
  }
}
TEST_F(TestClass, should_not_pass_all_yellow_red_green) {
  for (int i=0; i<3; i++){
  pthreelights[i]->setType(TL::LIGHT::yellow);
  EXPECT_EQ(TL::LIGHT::yellow, pthreelights[i]->getType());
  }
  for (int i=0; i<3; i++){
  pthreelights[i]->setType(TL::LIGHT::red);
  EXPECT_EQ(TL::LIGHT::red, pthreelights[i]->getType());
  }
  for (int i=0; i<3; i++){
  pthreelights[i]->setType(TL::LIGHT::green);
  EXPECT_EQ(TL::LIGHT::green, pthreelights[i]->getType());
  }
}

