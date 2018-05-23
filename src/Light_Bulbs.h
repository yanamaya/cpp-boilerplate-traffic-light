//Light_Bulbs.h
#ifndef LIGHT_BULBS_H_
#define LIGHT_BULBS_H_
#include "TLight.h"

class Red : public TLight
{
private:
public:
	Red() :TLight(TL::LIGHT::red) {};
	explicit Red(const TL::LIGHT & light) : TLight(light) {};
	virtual ~Red() {};
	void timer(const int rsec) const { TLight::timer(rsec); };
	void show() const override;

};

class Yellow : public TLight
{
private:
public:
	Yellow() :TLight(TL::LIGHT::yellow) {};
	virtual ~Yellow() {};
	void timer(const int ysec) const { TLight::timer(ysec); };
	void show() const override;
	
};

class Green : public TLight
{
private:
public:
	Green() :TLight(TL::LIGHT::green) {};
	explicit Green(const TL::LIGHT & light) : TLight(light) {};
	virtual ~Green() {};
	void timer(const int gsec) const { TLight::timer(gsec); };
	void show() const override;
};


#endif // !LIGHT_BULBS_H_
