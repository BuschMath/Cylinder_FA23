#include "Cylinder.h"

Cylinder::Cylinder()
{
	radius = 0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}

float Cylinder::getRadius()
{
	return radius;
}