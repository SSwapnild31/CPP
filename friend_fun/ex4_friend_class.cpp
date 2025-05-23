#include<iostream>
using namespace std;

class B;	//forward declaration
class A
{
	int x;
	int y;
public : 
	void set_data()
	{	
		cout <<"Enter x : ";
		cin >> x;
		cout <<"Enter y : ";
		cin >> y;
	}
	friend B;
};

class B
{
public :
	void display(A a)
	{
		cout <<"x : "<< a.x << endl;
		cout <<"y : "<< a.y << endl;
	}
};

int main()
{
	A a;
	B b;
	a.set_data();
	b.display(a);
	return 0;
}
