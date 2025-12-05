#include<iostream>
using namespace std;

class base
{
protected : int x;
public :
	void display()
	{
		x = 10;
		cout <<"base class x : "<< x << endl;
	}
};

class derived : public base
{
public :
	void display()
	{
		base::display();
		cout <<"derived class x : "<< x << endl;
	}
};

int main()
{
	derived d;
	d.display();
	return 0;
}
