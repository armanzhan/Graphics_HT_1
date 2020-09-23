#include "CMYK.h"



CMYK::CMYK(float c = 0, float m = 0, float y = 0, float k = 0) 
	: c(c), m(m), y(y), k(k)
{}


CMYK::~CMYK()
{
}

std::ostream & operator<<(std::ostream & os, CMYK & cmyk)
{
	os << "( " << cmyk.c << ", " << cmyk.m << ", " << cmyk.y << ", " << cmyk.k << ")" << std::endl;
	return os;
}
