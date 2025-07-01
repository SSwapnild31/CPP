#include<iostream>
using namespace std;

int main()
{
	auto fun=[](auto a,auto b)
	{
		return a+b;
	};
	
	int res = fun(10,30);
	cout << res << endl;
	
	return 0;
}
