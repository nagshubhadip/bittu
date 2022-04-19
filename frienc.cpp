#include<iostream>
using namespace std;
class bike;
class car
{
	int wheel;
	int cc;
	public:
		void set_val(int x, int y)
		{
			wheel = x;
			cc = y;
		}
		void show()
		{
			cout<<"Wheel = "<<wheel<<"\nCC = "<<cc<<endl;
		}
		friend class bike;
};
class bike
{
	public:
		void print(car c)
		{
			cout<<"\nInside Friend class...\n";
			cout<<"Wheel = "<<c.wheel<<"\nCC = "<<c.cc<<endl;
		}
};
class honda : public car
{
	public:
		void display()
		{
			cout<<"\nInside Derived class...\n";
			set_val(4,1600);
			show();
		}
};
int main()
{
	honda h;
	bike b;
	car c;
	c.set_val(2,200);
	b.print(c);
	h.display();
	
	return 0;
}
