#include<iostream>
#include<conio.h>
using namespace std;//AMPOLU RUBEN JASHUVA
class student
{
	int l,a,i;
	
	string q;
	public:
		student(int x){
			a=x;
		}
	    void print(){
	    	int i;
	    	while (i<a){
	    		cout<<"\nstudent name=";
	    		cin>>q;
	    	if(q=="_")
	    		cout<<"unknown";
	    		i++;
	    		
	    		
			}
			
	    }	
};
main()
{
	int a,q;
	cout<<"enter the number of student=";
	cin>>a;
	student obj(a);
	obj.print();

	
	getch();
}
