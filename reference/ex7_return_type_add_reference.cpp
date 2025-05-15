#include<iostream>
using namespace std;

int& fun()
{
	static int k=10;
	cout <<"k value : "<< k << endl;
	return k;
}

int main()
{
	fun()=400;
	fun();
	return 0;
}
