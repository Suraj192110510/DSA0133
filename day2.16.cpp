#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,i=1,t,s;
	
	cout<<"enter table name=";
	cin>>a;
	cout<<"how many u want=";
	cin>>s;
	
	while(i<=s){
		t=a*i;
		cout<<a<<"*"<<i<<"="<<t<<"\n";
		i++;
		
	}
	
}
