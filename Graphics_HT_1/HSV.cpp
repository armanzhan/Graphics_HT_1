#include "HSV.h"



HSV::HSV(int h = 0, float s = 0, float v = 0) : h(h), s(s), v(v){}

HSV::~HSV()
{
}

std::ostream & operator<<(std::ostream & os, HSV & hsv)
{

	os << "( ";
	if(hsv.h == NULL)
		os << "NaN";
	else
		os << hsv.h;
	os << ", " << hsv.s << ", " << hsv.v << ")" << std::endl;
	return os;
}
