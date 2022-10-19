#include<iostream>
using namespace std;
void print(int a)
{
	cout<<"int a is"<<a<<endl;
}
void print(float d)
{
	cout<<"float of d is"<<d<<endl;
}
void print(char s)
{
	cout<<"char of s is"<<s<<endl;
}
int main()
{
	int a;
	cin>>a;
	print(a);
	float d;
	cin>>d;
	print(d);
	char s;
	cin>>s;
    print(s);
	return 0;
}
