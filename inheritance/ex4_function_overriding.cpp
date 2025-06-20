#include<iostream>
using namespace std;

class Base
{
 public : 
	virtual void test()
	{
		cout <<"base test fun"<< endl;
	}
};

class Derived : public Base
{
 public :
	void test()
	{
		cout <<"derived test fun"<< endl;
	}	
};

int main()
{
	Base *b=new Derived();
	//Derived d;
	//Base *b;
	b->test();
	delete b;
	return 0;
}
