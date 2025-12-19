#include<iostream>
using namespace std;

int fun(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	
	return fun(n-1) + fun(n-2);
}

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	for(int i=0; i<num ;i++)
		cout <<fun(i)<<" ";
	cout << endl;
	return 0;
}
