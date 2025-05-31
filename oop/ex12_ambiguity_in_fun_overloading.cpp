#include<iostream>
using namespace std;

void sum(int a,int b=20,int c=30)
{
	cout << a + b + c << endl;
}
void sum(int a)
{
	cout << a << endl;
}

int main()
{
	sum(20);
}
