#include<iostream>
using namespace std;

class base
{
private :
	int rollno;
	string name;

public :
	void display()
	{
		cout <<"base class"<< endl;
	}
};

class derived : public base
{
public :
	void display()
	{
		cout <<"derived class"<< endl;
	}
};

int main()
{
	//base b;
	//b.display();
	
	//derived d;
	//d.display();
	
	//base *b = new derived;
	//b->display();
	
	derived *d = new derived;
	d->display();
	
	return 0;
}
