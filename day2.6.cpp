#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	
	cout<<"enter ur age=";
	cin>>a;
	if(a>=18){
		cout<<"ur eligible to vote ";
		
	}
	else{
		cout<<"ur  eligible to vote after "<<18-a;
	}
	
}
