#include<iostream>
using namespace std;

template<class type>
type fun(type a)
{
	return a;
}

int main()
{
	cout << fun('v') << endl;
	cout << fun(10) << endl;
	return 0;
}
