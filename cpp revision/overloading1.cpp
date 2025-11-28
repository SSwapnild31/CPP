#include<iostream>
using namespace std;

class base
{
public :
	void display(int a,int b);
	void display(int a);
};

void base::display(int a,int b)
{
	cout <<"display with 2 parameters"<< endl;
}

void base::display(int a)
{
	cout <<"display with 1 parameter"<< endl;
}

int main()
{
	base b;
	b.display(10,20);
	b.display(10);
	
	return 0;
}
