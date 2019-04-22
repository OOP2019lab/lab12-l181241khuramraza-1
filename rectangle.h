#pragma once
#include"shape.h"
class rectangle:public shape{
public:
	rectangle(float,float,string);
	float area();
	~rectangle()
	{
		cout<<"~rectangle() called."<<endl;
	}
private:
	float height;
	float width;
};
