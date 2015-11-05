#include "MyPoint.h"


MyPoint::MyPoint(void)
{
	this->x = 0; this->y = 0;
}


MyPoint::~MyPoint(void)
{
}

MyPoint::MyPoint(float x, float y)
{
	this->x = x;
	this->y = y;
}

void MyPoint::operator=(MyPoint B)
{
	this->x = B.x;
	this->y = B.y;
}