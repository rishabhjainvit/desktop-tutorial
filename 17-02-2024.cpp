#include<iostream>
class employee
{
	private: int emp_id;
	char emp_name;
	public: void get()
	{
		cout<<"\n input employee id:";
		cin>>emp_id;
		cout<<"\n input employee namee:";
		cin>>emp_name;
	}
	void show()
	{
		cout<<"\n employee id="<<emp_id;
		cout<<"\n employee name="<<emp_name;
		
	}
};
class manager : public employee
{
	private : int dsg;
	public: void get()
	{
		employee::get();
		cout<<"\n input manager designation: ";
		cin>>dsg;
	}
	void show()
	{
		employee::show();
		cout<<"\n input manager designation="<<dsg;
	}
};
int main()
{
	manager m;
	m.get();
	m.show();
}