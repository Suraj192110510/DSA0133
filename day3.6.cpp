#include<iostream>
#include<conio.h>
using namespace std;
class p

{
    int a;
    char b;
	public:
		p(int x,char y)
		{
			a=x;
			b=y;
			
		}
		
	    println()
		{
			cout<<"integer="<<a<<endl;
			cout<<"character="<<b<<endl;
		}
		
};
int main()
{
	int a;
	char b;
    cout<<"enter integer=";
	cin>>a;
	
	cout<<"enter char=";
	cin>>b;
	cout<<"first fuction\n";
	
	p obj(a,b);
	p obj1(b,a);

	obj.println();
	cout<<"secondfunction\n";
	obj1.println();
}
