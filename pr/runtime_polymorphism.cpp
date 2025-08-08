#include<iostream>
using namespace std;

class A
{
 public :
	virtual void base()
	{
		cout <<"Base class"<< endl;
	}
};

class B : public A
{
public :
	void base()
	{
		cout <<"Derived class"<< endl;
	}
};

int main()
{
	A *obj = new B;

	obj->base();

	return 0;
}
