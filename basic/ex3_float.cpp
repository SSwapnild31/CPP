#include<iostream>

using namespace std;
	
int main()
{
	float f;
	cout << "Enter float : "<< endl;
	cin >> f;
	cout << f << endl;		//%g
	cout << fixed << f << endl;	//%f
	cout << scientific << f << endl;	//%e
}
