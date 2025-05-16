#include<iostream>
using namespace std;

int main()
{
	int *p;
	p=new int;
	cout <<"Enter data : "; 
	cin >> *p;
	cout <<"*p : "<< *p << endl;
	delete p;
}
