//TrafficLight_YellowBlink.h
#ifndef TRAFFIC_LIGHT_YELLOWBLINK_H_
#define TRAFFIC_LIGHT_YELLOWBLINK_H_

#include "TLContainer.h"
#include "Light_Bulbs.h"

class TL_Yellow : public TLContainer {
private:
	public:
	TL_Yellow() : TLContainer(TL::LIGHT::yellow, 2) {};
	TL_Yellow(int num = 2) : TLContainer(TL::LIGHT::yellow, num) {};
	virtual ~TL_Yellow() {};
	void setRunTime(const TL::MODE & ymode, const int cycletoshow) override;
};

class Three_Sections : public TLContainer {
private:
public:
	Three_Sections(): TLContainer() {};
	Three_Sections(TLight**pthrsections, int n) : TLContainer(pthrsections, n) {};
	virtual ~Three_Sections() {};
	void setRunTime(const TL::MODE & ymode, const int cycletoshow) override;
};
#endif