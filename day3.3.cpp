#include<iostream>
#include<conio.h>
using namespace std;
class addamount

{
    int m;
	public:
		addamount(int x)
		{
			m=x;
		}
		addamount()
		{
			m=50;
		}
		void u()
		{
			cout<<"intial amount="<<m<<endl;
		}
	
		void k()
		{
			cout<<"final amount="<<m+50<<endl;
		}
};
int main()
{
	int m;
	cout<<"enter money added=";
	cin>>m;
	addamount obj();
	addamount obj1(m);
	obj1.u();
	obj1.k();
	
}
