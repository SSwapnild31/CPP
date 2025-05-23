#include<iostream>
using namespace std;

class A
{
	int x,y;
	friend void add(A*);
	friend void mul(A);
	public : void set_data();
};

void add(A *obj)
{
	cout <<"add : "<< obj->x + obj->y << endl;
}
void mul(A obj)
{
	cout <<"mul : "<< obj.x * obj.y << endl;
}

int main()
{
	A obj;
	obj.set_data();
	add(&obj);
	mul(obj);
	return 0;
}

void A::set_data()
{
	cout <<"Enter x : ";
	cin >> x;
	cout <<"Enter y : ";
	cin >> y;
}
