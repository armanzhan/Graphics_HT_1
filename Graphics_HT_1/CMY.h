#pragma once
#include "Header.h"
class CMY
{
public:
	float c, m, y;
	CMY(float, float, float);
	~CMY();
};

std::ostream& operator<<(std::ostream&, CMY&);