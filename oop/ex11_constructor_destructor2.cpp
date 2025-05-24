#include<iostream>
using namespace std;

class A
{
	int x, y;

	public :
		A();
		void get_data();
		~A();
};

A::A()
{
	cout <<"constructor"<< endl;
	x=10,y=20;
}
void A::get_data()
{
	cout <<"x : "<< x <<" y : "<< y << endl;
}

A::~A()
{
	cout <<"destructor"<< endl;
}

int main()
{
	A obj1,obj2,obj3;
	obj1.get_data();
	obj2.get_data();
	obj3.get_data();

	return 0;
}
