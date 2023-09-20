#include "Cylinder.h"
#include <iostream>

int main()
{
	Cylinder c;

	c.setRadius(2.0);

	std::cout << "Radius: " << c.getRadius() << std::endl;

	return 0;
}