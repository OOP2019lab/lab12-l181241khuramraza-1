#include"shape.h"
#include"triangle.h"

triangle::triangle(float Base,float Height,string Color):shape(Color)
{
	base=Base;
	height=Height;
	color=Color;
}
float triangle::area()
{
	float Area=0.0;
	Area=(base*height)/2;
	return Area;
}