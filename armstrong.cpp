#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;//AMPOLU RUBEN JASHUVE
int main()
{
	int y,a,n,i,len,temp,s=0,count=0,r;
	cout<<"enter the number=";
	cin>>a;
	n=a;
	y=a;
	while(a>0){
		r=n%10;
		n=n/10;
		i++;
		
		if(r==0)
		break;
		else
		count+=1;
		
	
	}
	len=count;
	while(a>0){
		temp=a%10;
		s=s+pow(temp,len);
		a=a/10;
		
			
	}
	
	cout<<s;
	if(s==y){
		cout<<"armstrong";
		
	}
	if(s!=y)
	    cout<<"not�armstrong";
}
