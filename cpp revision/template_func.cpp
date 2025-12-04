#include<iostream>
using namespace std;

template<class type>
type sum(type t)
{
	return t+t;
}

int main()
{
	cout << sum(10) << endl;
	cout << sum(20.3f) << endl;
	return 0;
}
