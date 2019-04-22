#include"shape.h"
#include"triangle.h"
#include"rectangle.h"
#include"circle.h"

int sumArea(shape& shape1,shape& shape2);

int main()
{
	
	triangle t1(1.0,9.0,"Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area();
	cout<<endl;
	cout<<t1.color;
	cout<<endl;
	cout<<c1.area();
	cout<<endl;
	cout<<r1.area();
	cout<<endl;
 
	shape *sptr= &t1;
	shape &sref=r1;
	cout<< sptr->area();
	cout<<endl;
	cout<< sptr->color;
	cout<<endl;
	cout<< sref.color;
	cout<<endl;
	cout<< sref.area();
	cout<<endl;
/*
	Exercise1 output
	4.5
	Red
	12.56
	12
	0
	Red
	Orange
	0
		*/


/*
	Exercise2 output

	4.5
	Red
	12.56
	12
	4.5
	Red
	Orange
	12
		*/
	///Exercise3a////
	shape s1("Purple");
	cout<<sumArea(t1,c1); 
	cout<<endl;
	cout<<sumArea(s1,r1);
	cout<<endl;
	cout<<sumArea(s1,t1);
	cout<<endl;
	//////Exercise 3b///
	int count=5;
	shape **shapesArray= new shape*[count];
	for(int i=0;i<count;)
	{
		float a=0,b=0;
		int c=0;
		string color;
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		cin>>c;
		if(c==1)
		{
			cout<<"Enter base"<<endl;
			cin>>a;
			cout<<"Enter Height"<<endl;
			cin>>b;
			cout<<"Enter color"<<endl;
			cin.ignore();
			getline(cin,color);
			triangle o(a,b,color);
			shapesArray[i]=&o;
			cout<<"Area of triangle :"<<shapesArray[i]->area()<<endl;
			i++;
		}
		if(c==2)
		{
			cout<<"Enter width"<<endl;
			cin>>a;
			cout<<"Enter Height"<<endl;
			cin>>b;
			cout<<"Enter color"<<endl;
			cin.ignore();
			getline(cin,color);
			rectangle o(a,b,color);
			shapesArray[i]=&o;
			cout<<"Area of rectangle :"<<shapesArray[i]->area()<<endl;
			i++;
		}
		if(c==3)
		{
			cout<<"Enter radius"<<endl;
			cin>>a;
			cout<<"Enter color"<<endl;
			cin.ignore();
			getline(cin,color);
			//cin.ignore();
			circle o(a,color);
			shapesArray[i]=&o;
			cout<<"Area of circle :"<<shapesArray[i]->area()<<endl;
			i++;
		}
	}

	
	//shape *s1= new triangle(1.0,9.0, "Red");
	//delete s1;

	return 0;

}

int sumArea(shape& shape1,shape& shape2)
{
	float s1=shape1.area();
	float s2=shape2.area();
	int sumarea=s1+s2;
	return sumarea;
}