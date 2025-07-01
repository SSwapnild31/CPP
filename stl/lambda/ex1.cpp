#include<iostream>
using namespace std;

int y = 100;
int main()
{
	int x = 10;
	
	auto arr=[x]()
	{
		cout <<"y : "<< y << endl;
		cout <<"x : "<< x << endl;
	};
	arr();
	return 0;
}
