#include<iostream>
#include<conio.h>
using namespace std;
class programming
{
	string name;
	public:
		programming(string s)
		{
			name=s;
		}
	
		void k()
		{
			cout<<"i love "<< name<<endl;
		}
};
int main()
{
	string name;
	cout<<"enter name=";
	cin>>name;
	programming obj(name);
	
	obj.k();
	
};
