//TLight.cpp
#include "TLight.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

TLight::TLight() : m_color(TL::LIGHT::undef), m_mode(TL::MODE::off) {};
TLight::TLight(const TL::LIGHT&light) : m_color(light), m_mode(TL::MODE::off) {};

void TLight::setType(const TL::LIGHT & light) {
	if (light == TL::LIGHT::undef){
		m_color = light;
	}
	else {
		std::cout<< "current color can't be updated\n";
		}
}

TL::LIGHT TLight::getType() const {
	return m_color;
}

void TLight::setMode(const TL::MODE & mode) {
	m_mode = mode;
}

TL::MODE TLight::getMode() const {
	return m_mode;
}

void TLight::timer(const int sec) const {
		double passed_t;
		clock_t start_t = clock();
		bool flag = true;
		while (flag) {
			passed_t = (clock() - start_t) / CLOCKS_PER_SEC;
			if (passed_t >= sec) {
				flag = false;
				}
			}
}



