//TLContainer.cpp
#include "TLContainer.h"
#include "Light_Bulbs.h"
#include <ctime>

TLContainer::TLContainer() : m_num(TL::SIZE), m_c_mode(TL::MODE::off), m_TrafficLight() {
		m_TrafficLight.push_back(new Red());
		m_TrafficLight.push_back(new Yellow());
		m_TrafficLight.push_back(new Green());
}

TLContainer::TLContainer(TLight**plight, int q) : m_num(q){
	for (int i = 0; i < m_num; i++) {
		m_TrafficLight.push_back(plight[i]);
	}
}

TLContainer::TLContainer(const TL::LIGHT&color, const int n):m_num(n) {
	for (int i = 0; i < m_num; i++) {
		if (TL::LIGHT::red == color) {
			m_TrafficLight.push_back(new Red(color));
		}
		else if (TL::LIGHT::green == color) {
			m_TrafficLight.push_back(new Green(color));
		}
		else
			m_TrafficLight.push_back(new Yellow());
	}
}

TLContainer::~TLContainer() {
	for (std::vector <TLight*>::iterator it = m_TrafficLight.begin(); it != m_TrafficLight.end(); it++) {
		delete *it;
	}
}
void TLContainer::clearUp(const TL::MODE & lmode) {
	for (int i = 0; i < m_num; i++) {
		m_TrafficLight[i]->setMode(TL::MODE::off);
	}
}

void TLContainer::show_all() const {
	for (int i = 0; i < m_num; i++) {
		m_TrafficLight[i]->show();
	}
}