#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,t,i,s=1;
	
	cout<<"enter=";
	cin>>a;
	int l=0,m=1;
	
	while(i<a){
		t=l+m;
		s=s+t;
		
		l=m;
		m=t;
		i++;
		
	}
	cout<<"sum of fibonacci=";
	cout<<s;
}
