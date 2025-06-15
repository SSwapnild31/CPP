#include<iostream>
using namespace std;

class B;
class A
{
	int rollno;
	char *name;
	friend class B;
};

class B
{
public : 
	void set_data(A &a)
	{
		a.name = new char[20];
		cout <<"Enter rollno & name"<< endl;
		cin >> a.rollno >> a.name;
	}
	void get_data(A &a)
	{
		cout <<"name : "<< a.name <<" rollno : "<< a.rollno << endl;
	}
};

int main()
{
	A a;
	B obj;
	obj.set_data(a);
	obj.get_data(a);
	return 0;
}
