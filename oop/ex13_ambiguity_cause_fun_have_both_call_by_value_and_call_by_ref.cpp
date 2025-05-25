#include<iostream>
using namespace std;

void sum(int a)
{
	cout << a << endl;
}

void sum(int &a)
{
	cout << a << endl;
}

int main()
{
	int b=20;
	sum(b);
}
