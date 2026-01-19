#include<iostream>
using namespace std;

class base
{
public:
	virtual void show(){
		cout <<"base show"<< endl;
	}
};

class derived : public base
{
public:
	void show(){
		cout <<"derived show"<< endl;
	}
};

int main()
{
	base *bptr = new derived;
	bptr->show();
	return 0;
}
