#pragma once
#include "Header.h"
class CMYK
{
public:
	CMYK(float, float, float, float);
	~CMYK();
	float c, m, y, k;
};


std::ostream& operator<<(std::ostream&, CMYK&);

