#include<conio.h>
using namespace std;
class area

{
    int l,b,s,a,r;
	public:
		area(int x)
		{
			l=b=x;
		}
		
		area()
		{
			l=0;
			b=0;
		}
		area(int c,int d,int z)
		{
			l=c;
			b=d;
			s=z;
		}
		
		print()
		{
			
			a=(l*b);
			cout<<"final rectangle area ="<<a<<endl;
			r=s*s;
			cout<<"final square area="<<r<<endl;
		}
	
		
};
int main()
{
	int l,b,s;
	cout<<"enter length of rectangle=";
	cin>>l;
	cout<<"enter breadth of rectangle=";
	cin>>b;
	cout<<"enter side of square=";
	cin>>s;
	area obj();
	area obj1(int l);
	area obj2(l,b,s);
	obj2.print();
}
