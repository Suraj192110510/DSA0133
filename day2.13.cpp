#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,i,t,s=0;
	
	cout<<"enter=";
	cin>>a;
	
	while(a!=0){
		t=a%10;
		s=(t)+s*10;
		a=a/10;
		i++;
		
	}
	cout<<"reverse of given number=";
	cout<<s;
}
