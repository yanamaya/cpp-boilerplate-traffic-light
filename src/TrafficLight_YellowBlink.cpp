//TrafficLight_YellowBlink.cpp
#include <iostream>
#include "TrafficLight_YellowBlink.h"

void TL_Yellow::setRunTime(const TL::MODE & ymode, const int cycletoshow) {  
    if (TL::MODE::on == ymode && cycletoshow > 0) {
		// clear up needed here before tlight logic
		this->clearUp(TL::MODE::off);
		for (int i = 0; i < cycletoshow; i++) {
    //if BOTH Yellow
				if (2 == m_num && TL::LIGHT::yellow == m_TrafficLight[0]->getType() && TL::LIGHT::yellow == m_TrafficLight[1]->getType()) {
					m_TrafficLight[0]->setMode(TL::MODE::on);
					m_TrafficLight[0]->show();
					if (TL::MODE::on == m_TrafficLight[0]->getMode()) {
						m_TrafficLight[1]->setMode(TL::MODE::off);
						m_TrafficLight[1]->show();
						m_TrafficLight[0]->setMode(TL::MODE::off);
						std::cout << "-----------------\n";
					}
					
					if (TL::MODE::off == m_TrafficLight[0]->getMode()) {
						m_TrafficLight[0]->show();
						m_TrafficLight[1]->setMode(TL::MODE::on);
						m_TrafficLight[1]->show();
						std::cout << "-----------------\n";
					}
                    else {
                        std::cout << "Sections are not both yellow\n";
                    }
                 };
        }
    }
	else {
		std::cout << "it is OFF\n";
	};
}
void Three_Sections::setRunTime(const TL::MODE & thrsecmode, const int cycletoshow) {
        if (TL::MODE::on == thrsecmode && cycletoshow > 0) {
		// clear up needed here before tlight logic
		this->clearUp(TL::MODE::off);
		for (int i = 0; i < cycletoshow; i++) {
            for (int i = 0; i < m_num; i++) {
						if (TL::LIGHT::red == m_TrafficLight[i]->getType() || TL::LIGHT::green == m_TrafficLight[i]->getType()) {
							m_TrafficLight[i]->setMode(TL::MODE::on);
							this->show_all();
							std::cout << "------------------------\n";
							m_TrafficLight[i]->setMode(TL::MODE::off);
							m_TrafficLight[i]->setMode(TL::MODE::standby);
							this->show_all();
							std::cout << "------------------------\n";
							m_TrafficLight[i]->setMode(TL::MODE::off);
						}
						else {
							m_TrafficLight[i]->setMode(TL::MODE::standby);
							this->show_all();
							std::cout << "------------------------\n";
							m_TrafficLight[i]->setMode(TL::MODE::off);
						}
						this->clearUp(TL::MODE::off);
            }
        }
    }
    else {
		std::cout << "it is OFF\n";
	};
}

