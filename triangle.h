#pragma once
#include"shape.h"

class triangle:public shape{
public:
	triangle(float,float,string);
	float area();
	~triangle()
	{
		cout<<"~triangle() called."<<endl;
	}
private:
	float base;
	float height;
};