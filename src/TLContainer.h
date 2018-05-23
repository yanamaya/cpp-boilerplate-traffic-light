#ifndef TLCONTAINER_H_
#define TLCONTAINER_H_
#include "TLight.h"
#include <vector>

class TLContainer {
private:
protected:
	int m_num;
	TL::MODE m_c_mode;
	std::vector<TLight*> m_TrafficLight;
public:
	TLContainer();
	TLContainer(TLight**tlight, int q);
	TLContainer(const TL::LIGHT&color, const int n);
	virtual ~TLContainer();
	virtual void clearUp(const TL::MODE & lmode);
	virtual void setRunTime(const TL::MODE & cmode, int time)=0;
	void show_all() const;
};

#endif
