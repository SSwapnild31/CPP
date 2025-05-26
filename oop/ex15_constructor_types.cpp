#include<iostream>
using namespace std;

class family
{
	int cash,gold;
public : 
	family()
	{
		cout <<"default constructor"<< endl;
		cin >> cash >> gold;
	}
	family(int a,int b)
	{
		cout <<"parameterized constructor"<< endl;
		cash=a,gold=b;
	}
	family(family &t)
	{
		cout<<"copy constructor"<< endl;
		cash=t.cash,gold=t.gold;
	}
	~family()
	{
		cout <<"destructor"<< endl;
	}
	void get_data()
	{
		cout << cash <<" "<< gold << endl;
	}
};

int main()
{
	family f1,f2(100,200),f3(f1);
	f1.get_data();
	f2.get_data();
	f3.get_data();
}
