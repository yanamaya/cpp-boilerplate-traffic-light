#include <iostream>
#include "TrafficLight_YellowBlink.h"
using namespace TL;
int main (){

	std::cout << "Start: " << std::endl;
	std::cout << "Two yellow sections: " << std::endl;
	TL_Yellow two_yellow(2);
	two_yellow.setRunTime(TL::MODE::on, 2);

	std::cout << "Three sections: " << std::endl;

    TLight * psections[3];
	psections[0] = new Red(TL::LIGHT::red);
	psections[1] = new Yellow();
	psections[2] = new Green(TL::LIGHT::green);

	Three_Sections some (psections, 3);
	some.setRunTime(TL::MODE::on, 3);

	std::cout << "Stop: " << std::endl;
	return 0;
}