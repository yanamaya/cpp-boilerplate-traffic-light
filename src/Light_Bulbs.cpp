//Light_Bulbs.cpp
#include "Light_Bulbs.h"
#include <ctime>

void Red::show() const {
	if (TL::MODE::on == this->getMode()) {
		std::cout << "RED ON       \n";
			this->timer(5);
			}
	else if (TL::MODE::standby == this->getMode()) {
		
			std::cout << "RED BLINKING \n";
			this->timer(3);
	}
	else if (TL::MODE::off == this->getMode()) {
		std::cout << "RED OFF         \n";
		this->timer(1);
	}
	else {
		std::cout << "Section is OFF\n";
	}
};

void Yellow::show() const {
		if (TL::MODE::on == this->getMode()) {
			std::cout << "YELLOW ON     \n";
			this->timer(1);
		}
		else if (TL::MODE::standby == this->getMode()) {
				std::cout << "YELLOW BLINKING \n";
				this->timer(3);
		}
		else if (TL::MODE::off == this->getMode()) {
			std::cout << "YELLOW OFF        \n";
			this->timer(1);
		}
		else {
			std::cout << "Section is OFF\n";
		}
}

void Green::show() const {
	if (TL::MODE::on == this->getMode()) {
		std::cout << "GREEN ON       \n";
		this->timer(5);
	}
	else if (TL::MODE::standby == this->getMode()) {
			std::cout << "GREEN BLINKING \n";
			this->timer(3);
	}
	else if (TL::MODE::off == this->getMode()) {
		std::cout << "GREEN OFF        \n";
		this->timer(1);
	}
	else {
		std::cout << "Section is OFF\n";
	}
};