#include<iostream>
using namespace std;

template<class type,class type1>
void fun(type a,type1 b)
{
	cout <<"In fun a : "<< a <<" b : "<< b << endl;
}

int main()
{
	fun(10,'s');
	
	return 0;
}
