#include<iostream>
using namespace std;

class base 
{
 public :
	void display()
	{
		cout <<"display in base class"<< endl;
	}
};

class derived : public base
{
 public : 
	void display()
	{
		cout <<"display in derived class"<< endl;
	}
};

class derived1 : public derived 
{
 public :
	void display()
	{
		cout <<"display in derived1 class"<< endl;
	}
};

int main()
{
	derived obj;
	obj.display();
	
	return 0;
}
