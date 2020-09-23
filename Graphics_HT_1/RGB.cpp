#include "RGB.h"



std::ostream & operator<<(std::ostream & os, RGB & rgb)
{
	os << "( " << rgb.r << ", " << rgb.g << ", " << rgb.b << ")" << std::endl;
	return os;
}

RGB::RGB(float r = 0, float g = 0, float b = 0)
	:r(r), g(g), b(b)
{}

RGB::~RGB()
{
}
