#include<iostream>
#include<conio.h>
using namespace std;
class movie
{
	public:
		movie()
		{
			cout<<"vijay"<<endl;
			cout<<"suriya"<<endl;
			cout<<"ajith"<<endl;
			cout<<"vikram"<<endl;
			cout<<"siva karthikeyan"<<endl;
		}
};

class mostpopularactors: public movie
{
	public:
		mostpopularactors()
		{
			cout<<"most popular actor in movie"<<endl;
			cout<<"vijay"<<endl;
			cout<<"ajith"<<endl;
			cout<<"suriya"<<endl;
		}
};

class recentlypopularactors: public movie
{
	public:
		recentpopularactors()
		{
			cout<<"some recently popular actors"<<endl;
			cout<<"vikram"<<endl;
			cout<<"siva karthikeyan"<<endl;
		}
};

class alltimepopularactors: public mostpopularactors, public recentlypopularactors
{
	public:
		k()
		{
			cout<<"most popular actors: "<<endl;
			cout<<"vijay"<<endl;
			cout<<"ajith"<<endl;
			cout<<"suriya"<<endl;
			cout<<"Vikram"<<endl;
		}
	
};
return 0;

