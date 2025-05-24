#include<iostream>
using namespace std;

class A
{
	int x,y;

 public :
	A()
	{
		cout <<"constructor"<< endl;
		x=10,y=20;
	}
	
	void get_data()
	{
		cout << x <<" "<< y << endl;
	}
	
	~A()
	{
		cout <<"destructor"<< endl;
	}
};

int main()
{
	A obj;
	obj.get_data();
	return 0;
}
