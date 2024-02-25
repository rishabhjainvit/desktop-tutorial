#include<iostream>
using namespace std;
class item
{
	private:int code[5],price[5];
	            char n[5][30]
;	public: void get();
			void sum();
			void great();
			void show();
};
void item::get()
{
	int x;
	for(x=0;x<=4;x++)
	{
	cout<<"\n enter item code";
	cin>>code[x];
	cout<<"\n Enter item price";
	cin>>price[x];
	cout<<"\n items 5 names";
	cin>>n[x];
}

}

void item::sum()
{
	int s=0,x;
	for(x=0;x<=4;x++)
	{
		s=s+price[x];
	}
	cout<<"\n Total Amount ="<<s;
}

void item::great()
{
	int g,x;
	g=price[0];
	for(x=0;x<=4;x++)
	{
		if(g<price[x])
		{
			g=price[x];
		}
	}
	cout<<"\n Greater price ="<<g;
}

void item::show()
{
	int x;
	for(x=0;x<=4;x++)
	{
	cout<<"\n Item Code ="<<code[x];
	cout<<" Price ="<<price[x];
	cout<<" \n name="<<n[x];
	}
}


int main()
{
	item order;
int ch,h;
do
{
cout<<"\n Main Menu";
cout<<"\n 1. Add Item";
cout<<"\n 2. Total Amount ";
cout<<"\n 3. Show Greater Number";
cout<<"\n 4. Show List";
cout<<"\n 5. Exit";
cout<<"\n Enter Your Choice";
cin>>ch;
switch(ch)
{
	case 1:order.get();
		break;
	case 2:order.sum();
		break;
	case 3:order.great();
		break;		
	case 4:order.show();
		break;	
	case 5:break;
}
cout<<"\n Continue 1/0";
cin>>h;
}while(h!=0);

}