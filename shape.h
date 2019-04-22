#pragma once
#include<iostream>
#include<string>
using namespace std;

class shape{
	protected:
		string type;
	public:
		shape(string);
		virtual float area();
		string color;
		virtual ~shape()
		{
			cout<<"~shape() called."<<endl;
		}
};