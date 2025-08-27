#include<iostream>
using namespace std;

class base
{
public:
	virtual void display() = 0;
};

class derived : public base
{
public:
	void display()
	{
		cout <<"display in derived class"<< endl;
	}
};

class derived1 : public base
{
public :
	void display()
	{
		cout <<"display in derived1 class"<< endl;
	}
};


int main()
{
	//base b;		//Error (object can't be created for abstract class)
	
	base *b1 = new derived;	
	base *b2 = new derived1;
	b1->display();
	b2->display();
	return 0;
}
