
#include<iostream>
using namespace std;

int main()
{
	int* ptr = nullptr;
	*ptr = 5;				//here, it'll give segmentation fault
	//cout << *ptr << endl;
	return 0;
}
