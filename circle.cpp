#include"shape.h"
#include"circle.h"


circle::circle(float Radius,string Color):shape(Color)
{
	radius=Radius;
	color=Color;
}
float circle::area()
{
	float Area=0.0;
	Area=3.14*(radius*radius);
	return Area;
}