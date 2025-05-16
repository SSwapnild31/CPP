#include<iostream>
using namespace std;

int main()
{
	unsigned int *p,n;
	cin >> n;
	p=new unsigned int[n];
	
	cout <<"memory allocated"<< endl;
	delete []p;
}
