#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int id,n,i;
	string s;
	int w1,w2,w3,avg;


	cout<<"Enter no of students=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Student"<<i<<"=";
		cin>>s;
		cout<<"Enter id=";
	    cin>>id;
	    cout<<"Enter marks for Maths";
	    cin>>w1;
	    cout<<"Enter marks for Physics";
	    cin>>w2;
	    cout<<"Enter marks for Biology";
	    cin>>w3;
	    avg=(w1+w2+w3)/3;
	    cout<<"The averge marks="<<avg<<"\n";
	    if(avg>=90)cout<<"s grade";
	    if(avg<90 && avg>80)cout<<"A-grade"<<"\n";
	    
	    if(avg<80 && avg>70)cout<<"B-grade"<<"\n";
	    if(avg<70 && avg>60)cout<<"c-grade"<<"\n";
	    
	    if(avg<60 && avg>50)cout<<"D-grade"<<"\n";
	    if(avg<50)
	    cout<<"fail"<<"\n";
	}
	
}
