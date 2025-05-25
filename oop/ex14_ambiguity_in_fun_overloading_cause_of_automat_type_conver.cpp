#include<iostream>
using namespace std;

void sum(float a)
{
	cout << a << endl;
}

void sum(double a)
{
	cout << a << endl;
}

int main()
{
	sum(200);
	return 0;
}
