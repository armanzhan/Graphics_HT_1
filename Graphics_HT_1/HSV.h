#pragma once
#include "Header.h"
class HSV
{
public:
	HSV(int h, float s, float v);
	~HSV();
	int h;
	float s, v;
	//bool his;
};

std::ostream& operator<<(std::ostream&, HSV&);
