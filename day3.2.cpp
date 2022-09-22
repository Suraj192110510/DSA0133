#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle

{
    float l,b,a;
	public:
		area()
		{
			a=l*b;
			cout<<"Area is : "<<a;
		}
		Rectangl()
		{
			l=0;
			b=0;
		}
		Rectangle(float x,float y)
		{
			l=x;
			b=y;
		}
		Rectangle(float x)
		{
			l=b=x;
		}
	
};
int main()
{
	float l,b;
	cout<<"enter length : ";
	cin>>l;
	cout<<"enter breadth : ";
	cin>>b;
	Rectangle obj();
	Rectangle obj1(l,b);
	Rectangle obj2(l);
	obj1.area();
	obj1.area();
	
}
