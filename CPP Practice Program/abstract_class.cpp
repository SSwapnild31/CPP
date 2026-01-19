#include<iostream>
using namespace std;

class base
{
public:
	virtual void show() = 0;
	virtual void display(){
		cout <<"base display"<< endl;
	}
};
class derived : public base
{
public:
	void show(){
		cout <<"derived show"<< endl;
	}
	void display(){
		cout <<"derived display"<< endl;
	}
};

int main()
{
	base *bptr = new derived;
	bptr->show();
	bptr->display();

	derived d;
	d.show();
	d.display();
	return 0;
}
