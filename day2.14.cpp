#include<iostream>
using namespace std;
int main()
{
	int people_enter,people_exit,people_inital,people_left;
	cout<<"Intial Number of people in the bank : ";
	cin>>people_inital;
	cout<<"Number of people entered the bank : ";
	cin>>people_enter;
	cout<<"Number of people exit the bank : ";
	cin>>people_exit;
	people_left = people_inital+people_enter+people_exit;
	cout<<"Number of people left is people in the bank : "<<people_left;
}
