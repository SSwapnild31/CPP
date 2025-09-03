#include<iostream>
using namespace std;

int a = 10, b = 20;

int main()
{
	int c = 100, d = 200;
	
	auto msg = [&c](){
		cout << a << endl;
		cout << c << endl;
		c = 20;
	};
	
	msg();

	cout << c << endl;
	
	return 0;
}
