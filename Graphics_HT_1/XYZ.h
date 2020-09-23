#pragma once
#include "Header.h"
class XYZ
{
public:
	XYZ(float, float, float);
	~XYZ();
	float x, y, z;
};

std::ostream& operator<<(std::ostream&, XYZ &);