#include<iostream>
using namespace std;

class A
{
	int x;
	A()
	{
		cout <<"private constructor"<< endl;
		x=10;
	}
	~A()
	{
		cout <<"private destructor"<< endl;
	}

public :
	static void create_object()
	{
		A obj;
		cout <<"object created.."<< endl;
	}
};

int main()
{
	//A obj;	error
	
	A::create_object();
	
	return 0;
}
