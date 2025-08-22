#include<iostream>
using namespace std;

class A
{
 public :
	virtual void display()
	{
		cout<<"In class A"<< endl;
	}
	
	static void display1()
	{
		cout <<"static display"<< endl;
	}
};
class B : public A
{
 public :
	void display()
	{
		cout<<"In class B"<< endl;
	}
};

int main()
{
	A *obj = new B;
	obj->display();
	A::display1();
	return 0;
}	
