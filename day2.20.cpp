#include<iostream>
#include<conio.h>
using namespace std;//AMPOLU RUBEN JASHUVA
main()
{
	int id,sl;
	string n;
	
	cout<<"enter  name=";
	cin>>n;
	cout<<"enter id=";
	cin>>id;
	cout<<"engter salary=";
	cin>>sl;
	int da,hra,pf,net;
	da=sl/4;
	hra=sl/10;
	pf=sl/20;
	net=(sl+da+hra)-pf;
	cout<<"da="<<da<<"\n";
	cout<<"hra="<<hra<<"\n";
	cout<<"pf="<<pf<<"\n";
	cout<<"net salary="<<net<<"\n";
		
		
	
	
}
