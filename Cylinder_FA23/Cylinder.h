#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
	Cylinder();
	~Cylinder();

	void setRadius(float radius_);
	float getRadius();

private:
	float radius;
};

#endif // !CYLINDER_H

