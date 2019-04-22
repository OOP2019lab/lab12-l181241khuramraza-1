#pragma once
#include"shape.h"

class circle:public shape{
public:
	circle(float,string);
	float area();
	~circle()
	{
		cout<<"~circle() called."<<endl;
	}
private:
	float radius;
};