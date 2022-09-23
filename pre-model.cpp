#include<iostream>
#include<conio.h>
using namespace std;
class Room224
{
	public:
		Room224()
		{
			cout<<"computer"<<endl;
			cout<<"keyboard"<<endl;
			cout<<"mouse"<<endl;
			cout<<"chairs"<<endl;
			cout<<"students"<<endl;
			cout<<"teachers"<<endl;
			cout<<"tables"<<endl;
			cout<<"windows"<<endl;
			cout<<"tiles"<<endl;
			cout<<"walls"<<endl;
			cout<<"ac"<<endl;
			cout<<"plants"<<endl;
		}
};

class movableitems: public Room224
{
	public:
		movableitems()
		{
			cout<<"The movable items in Room 224"<<endl;
			cout<<"tables"<<endl;
			cout<<"chairs"<<endl;
			cout<<"students"<<endl;
			cout<<"teachers"<<endl;
			cout<<"computers"<<endl;
			cout<<"keyboard"<<endl;
			cout<<"mouse"<<endl;
		}
};

class immovableitems: public Room224
{
	public:
		immovableitems()
		{
			cout<<"some of the immovable item in room 224"<<endl;
			cout<<"Plants"<<endl;
			cout<<"Windows"<<endl;
		}
};

class livingitems: public movableitems , public immovableitems
{
	public:
		k()
		{
			cout<<"Living items in Room 224 : "<<endl;
			cout<<"students"<<endl;
			cout<<"teachers"<<endl;
			cout<<"Plants"<<endl;
		}
	
};

int main()
{
	livingitems q;
	return 0;
}
