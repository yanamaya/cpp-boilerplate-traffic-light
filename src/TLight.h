//TLight.h
#ifndef TLIGHT_H_
#define TLIGHT_H_
#include <iostream>
#include <vector>
#include <string>

const int MAX_SIZE = 6;

namespace TL {
	enum LIGHT { red, yellow, green, arrow, r_pedestrian, g_pedestrian, undef };
	enum MODE { on, off, standby };
	const int SIZE = 3;
}

class TLight
{
private:
	TL::LIGHT m_color;
	TL::MODE m_mode;
public:
	TLight();
	explicit TLight(const TL::LIGHT & light);
	virtual ~TLight() {};
	void setType(const TL::LIGHT & light);
	TL::LIGHT getType() const;
	virtual void setMode(const TL::MODE & mode);
	TL::MODE getMode() const;
	virtual void timer(const int sec = 1) const = 0;
	virtual void show() const = 0;
};


#endif