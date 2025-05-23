#include<iostream>
using namespace std;

class A
{
	int x;
	friend int main();
	
	public : void set_data();
};

int main()
{
	A obj1,obj2,obj3;
	
	obj1.set_data();
	cout <<"x : "<< obj1.x << endl;
	
	return 0;
}

void A::set_data()
{
	cout <<"Enter x : ";
	cin >> x;		
}
