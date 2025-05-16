#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int(123);
	cout <<"*p : "<< *p << endl;
	delete p;
}
