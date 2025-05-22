#include<iostream>
using namespace std;

void fun(string s="india")
{
	cout << s << endl;
}

int main()
{
	fun();
	fun("vector");
}
