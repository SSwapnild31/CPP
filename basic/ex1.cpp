#include<iostream>
using namespace std;
int main()
{
	int x;

	cout << showbase << uppercase << showpos;
	cout << "Enter x : ";
	cin >> x;

	cout <<"x value : "<< x << endl;
	cout <<"hexdecimal : "<< hex << x << endl;
	cout <<"octal : "<< oct << x << endl;
	
	int y=300;
	
	cout<<dec;	//from here onwords values will be printed in decimal form
	
	cout << noshowbase << nouppercase << noshowpos;	
	cout <<"y : "<< y << endl;
}
