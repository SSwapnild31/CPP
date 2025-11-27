#include<iostream>

using namespace std;

int main()
{
	char *p;
	
	p = new char[20];
	
	cout << sizeof(p) << endl;
	cin >> p;	 
	return 0;
}
