#include<iostream>
using namespace std;

class Base
{
 public :
	int x;
	Base()
	{
		cout <<"Base const"<< endl;
		cin >> x;
	}
	~Base()
	{
		cout <<"Base dest"<< endl;
	}
};

class Derived1 : virtual public Base
{
 public : 
	int y;
	Derived1()
	{
		cout <<"Derived1 const"<< endl;
		cin >> y;
	}
	~Derived1()
	{
		cout <<"Derived1 dest"<< endl;
	}
};

class Derived2 : virtual public Base
{
 public : 
	int z;
	Derived2()
	{
		cout <<"Derived2 const"<< endl;
		cin >> z; 
	}
	~Derived2()
	{
		cout <<"Derived2 dest"<< endl;
	}
};

class Derived3 : public Derived1,public Derived2
{
 public : 
	int m;
	Derived3()
	{
		cout <<"Derived3 const"<< endl;
		cin >> m;
	}
	~Derived3()
	{
		cout <<"Derived3 dest"<< endl;
	}	
	void get_data()
	{
		cout << x << endl;
		//cout << Derived1::x << endl;
		//cout << Derived2::x << endl;
		cout << y << endl;
		cout << z << endl;
		cout << m << endl;
	}
};


int main()
{
	Derived3 d;
	d.get_data();
	return 0;
}
