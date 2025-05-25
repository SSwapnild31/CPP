#include<iostream>
using namespace std;

void sum(int a,int b=20)
{
	cout << a + b << endl;
}
void sum(int a)
{
	cout << a << endl;
}

int main()
{
	sum(20);
}
