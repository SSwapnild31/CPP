#include<iostream>
using namespace std;

void sum(int a,int b)
{
	cout << a+b <<endl;
}
void sum(float a,float b)
{
	cout << a+b << endl;
}
void sum(double a,double b)
{
	cout << a+b << endl;
}
int main()
{
	sum(10,20);
	sum(10.2f,20.2f);
	sum(10.55,30.85);
	return 0;
}
