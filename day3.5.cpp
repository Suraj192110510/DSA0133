#include<iostream>
#include<conio.h>
using namespace std;
class printNumber

{
    int a;
    double b;
    float c;
    
	public:
		printNumber(int x,float y,double z)
		{
			a=x;
			b=y;
			c=z;
		}
	
		println()
		{
			cout<<"different datatypes but one function println\n";
			cout<<"integer="<<a<<endl;
			cout<<"double="<<b<<endl;
			cout<<"float="<<c<<endl;
		}
	
	
};
int main()
{
	int a;
    double b;
    float c;
	cout<<"enter integer=";
	cin>>a;
	
	cout<<"enter double=";
	cin>>b;
	
	cout<<"enter float=";
	cin>>c;
	printNumber obj(a,b,c);
	
	obj.println();
	
	
}
