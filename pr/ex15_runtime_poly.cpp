#include<iostream>
using namespace std;

class A
{
 public :
	void display()
	{
		cout <<"display in class A"<< endl;
	}
	~A()
	{
		cout <<"A dest"<< endl;
	}
};
class B : public A
{
 public : 
	void display()
	{
		cout <<"display in class B"<< endl;
	}
	~B()
	{
		cout <<"B dest"<< endl;
	}
};


int main()
{
	A *obj = new B;
	
	//B *obj = new A;	//erroe, (downcasting without cast)
	obj->display();
	
	return 0;
}
