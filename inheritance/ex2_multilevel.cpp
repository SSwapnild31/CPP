#include<iostream>
using namespace std;

class Base
{
public : 
	int x;	
	Base()
	{
		cout <<"Base const"<< endl;
		x = 10;
	}
	~Base()
	{
		cout <<"Base dest"<< endl;
	}
	
};

class Derived1 : public Base
{
 public :
	int y;
	Derived1()
	{
		cout <<"Derived1 const"<< endl;
		y = 20;
	}
	~Derived1()
	{
		cout <<"Derived1 dest"<< endl;
	}
	
};

class Derived2 : public Derived1
{
public : 
	int z;
	Derived2()
	{
		cout <<"Derived2 const"<< endl;
		z = 30;
	}
	~Derived2()
	{
		cout <<"Derived2 dest"<< endl;
	}
	void get_data()
	{
		cout <<"x : "<< x << endl;
		cout <<"y : "<< y << endl;
		cout <<"z : "<< z << endl;
	}	
};

int main()
{
	Derived2 d;
	d.get_data();
	return 0;
}
