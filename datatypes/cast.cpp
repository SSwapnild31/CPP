#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	
	//medium safe and no runtime check
	double d1 = static_cast<double>(a);

	//high safety and runtime check
	double d = dynamic_cast<double>(a);


	return 0;
}
