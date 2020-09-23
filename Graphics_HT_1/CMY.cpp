#include "CMY.h"



CMY::CMY(float c = 0, float m = 0, float y = 0)
	: c(c), m(m), y(y)
{}

CMY::~CMY()
{
}

std::ostream & operator<<(std::ostream & os, CMY & cmy)
{
	os << "( " << cmy.c << ", " << cmy.m << ", " << cmy.y << ")" << std::endl;
	return os;
}
