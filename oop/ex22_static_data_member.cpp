#include<iostream>
using namespace std;

class A
{
	static int x;
	int y;
};

int main()
{
	A obj;
	cout << sizeof(A) << endl;
	cout << sizeof(obj) << endl;
	return 0;
}
