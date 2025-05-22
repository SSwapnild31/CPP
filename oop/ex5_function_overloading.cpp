#include<iostream>
using namespace std;

void sum(int a,char b)
{
	cout << a <<" "<< b << endl;
}

void sum(char a,int b)
{
	cout << a <<" "<< b << endl;
}

int main()
{
	sum(10,'a');
	sum('a',20.6f);
	return 0;
}
