#include<iostream>
using namespace std;
int main()
{
	int consumer_id,amount,last_month_reading,current_month_reading,EB_type,units_consumed;
	cout<<"Consumer ID : ";
	cin>>consumer_id;
	cout<<"Last Month Reading : ";
	cin>>last_month_reading;
	cout<<"Current Month Reading : ";
	cin>>current_month_reading;
	cout<<"Type of EB  : "<<endl;
	cout<<"1.Domestic"<<endl;
	cout<<"2.Commercial"<<endl;
	cin>>EB_type;
	units_consumed=current_month_reading-last_month_reading;
	if(EB_type==1)
	{
		if(units_consumed<0)
		{
			cout<<"Invalid current month reading"<<endl;
		}
		else if(units_consumed>=0 and units_consumed<=100)
		{
			amount=units_consumed*1;
		}
		else if(units_consumed>=101 and units_consumed<=200)
		{
			amount=(100*1)+((units_consumed-100)*2.50);
		}
		else if(units_consumed>=201 and units_consumed<=500)
		{
			amount=(100*1)+(100*2.50)+((units_consumed-200)*4);
		}
		else if(units_consumed>=501)
		{
			amount=(100*1)+(100*2.50)+(300*4)+((units_consumed-500)*6);
		}
	}
	else if(EB_type==2)
	{
		if(units_consumed<0)
		{
			cout<<"Invalid current month reading"<<endl;
		}
		else if(units_consumed>=0 and units_consumed<=100)
		{
			amount=units_consumed*2;
		}
		else if(units_consumed>=101 and units_consumed<=200)
		{
			amount=(100*2)+((units_consumed-100)*4.50);
		}
		else if(units_consumed>=201 and units_consumed<=500)
		{
			amount=(100*2)+(100*4.50)+((units_consumed-200)*6);
		}
		else if(units_consumed>=501)
		{
			amount=(100*2)+(100*4.50)+(300*6)+((units_consumed-500)*7);
		}
	}
	else
	{
		cout<<"Invalid Choice of EB Type";
	}
}
