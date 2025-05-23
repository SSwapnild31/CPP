#include<iostream>
using namespace std;

class B;	//forward declaration
class A
{
	int x;
	friend int add(A,B);
	
	public : void set_data();
};

class B
{
	int y;
	friend int add(A,B);
	
	public : void set_data();
};

void A::set_data()
{
	cout <<"Enter x : ";
	cin >> x;
}

void B::set_data()
{
	cout <<"Enter y : ";
	cin >> y;
}

int main()
{
	A a;
	B b;
	a.set_data();
	b.set_data();
	cout <<"add : "<< add(a,b) << endl;

	return 0;
}

int add(A a,B b)
{
	return a.x+b.y;
}
