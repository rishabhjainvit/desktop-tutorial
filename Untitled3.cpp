#include<iostream>
using namespace std;
class furniture
{
	private: int weight,height;
	        char color(20);
	public: void get()
	{
		cout<<"\n input height ";
		cin>>height;
		cout<<"\n input weight";
		cin>>weight;
		cout<<"\n input colour";
		cin>>colour;
			}       
	void show()
	{
		cout<<"\n height="<<height;
		cout<<"\n weight="<<weight;
		cout<<"\n colour="<<colour;
			 }		 
	
}
class bookself: public furniture
{
	private: int no_self
	public:  void get()
	{
		furniture::get();
		cout<<"\n input no of self";
		cin>>no_self;
	}
	void show()
	{
		furniture::show();
	    cout<<"\n no of self="<<no_self
}
};
class chair::public furniture
{
	private: int no_legs;
	cin>>no_legs;
}
void show();
{
	furniture::show()
	cout<<"\n no of legs="<<no_legs
}
};
int main()
{
	bookself b;
	chair c;
	b.get();
	b.show();
	c.get();
	c.show();
}
