#include<iostream>
using namespace std;

class Base
{
 public : 
	int x;
};

class Derived:public Base
{
 public :
	int x;
};

int main()
{
	Derived d;
	d.Base::x=10;
	d.x=20;
	cout << d.Base::x <<" "<< d.x << endl;
	return 0;
}
