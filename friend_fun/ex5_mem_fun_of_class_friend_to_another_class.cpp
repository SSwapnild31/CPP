#include<iostream>
using namespace std;

class B;
class A
{
	public : void display(B);
};

class B
{
	int x;
	public : 
		void set_data()
		{
			cout <<"Enter x : ";
			cin >> x;		
		}
	friend void A::display(B);
};

void A::display(B b)
{
	cout <<"x : "<< b.x <<endl;
}

int main()
{
	B b;
	b.set_data();
	A a;
	a.display(b);
	
	return 0;
}
