#include<iostream>
using namespace std;
class base1
{
	public: void b1()
	{
	
	cout<<"\n show base 1 class";
}
	
};
class base2
{
	public:void b2()
	{
		cout<<"\n show base 2;";
	}
};
class base3
{
	public: void b3()
	{
		cout<<"\n show base 3";
	}
};
class derived : public base1 , public base2 , public base3 
{
	public : void der()
	{
		base1::b1();
		base2::b2();
		base3::b3();
		cout<<"\n show derived class";
	}
};
int main()
{
	derived d;
	d.der();
}
