#include<iostream>

class base
{
public:
	int x;
	virtual void display(){
		std::cout <<"base display x : "<< x << std::endl;
	}
};

class derived : public base
{
public:
	int y;
	/*virtual void display(){
		std::cout <<"derived display y : "<< y << std::endl;
	}*/
};

int main()
{
	std::cout << sizeof(base) << std::endl;
	std::cout << sizeof(derived) << std::endl;
	
	base *bptr = new base();
	bptr->display();
	
	base *dptr = new derived();
	dptr->display();
	return 0;
}
