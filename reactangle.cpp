#include"shape.h"
#include"rectangle.h"


rectangle::rectangle(float Height,float Width,string Color):shape(Color)
{
	height=Height;
	width=Width;
	color=Color;
}
float rectangle::area()
{
	float Area=0.0;
	Area=width*height;
	return Area;
}