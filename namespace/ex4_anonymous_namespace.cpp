#include<iostream>
using namespace std;

int x=20;

namespace
{
	int x=10;
}

int main()
{
	cout << ::x << endl;
	cout << x << endl;	//ambiguous	
}
