#include<iostream>
using namespace std;

class Base
{
	public :
		virtual void show()=0; //Pure virtual function
};

class Derived : public Base
{
	public :
		void show()
		{
			cout<<"Implimentation of virtual function in derived class";
		}
};

int main()
{
	Base *b;
	Derived d;
	b=&d;
	b->show();
	return 0;
}
