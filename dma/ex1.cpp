#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	
	cout <<"Enter data : ";
	cin >> *p;
	cout <<"*p : "<< *p << endl;
}
