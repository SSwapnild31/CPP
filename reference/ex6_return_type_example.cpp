#include<iostream>
using namespace std;

int* fun()
{
	static int k=10;
	cout <<"k value : "<< k << endl;
	return &k;
}

int main()
{
	#if 0
	int *p;
	p=fun();
	*p=400;
	fun();
	#else	
	*fun()=400;
	fun();
	#endif
	return 0;
}
