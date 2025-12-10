#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	int res = num / 2;
	res *= 2;

	if(res==num)
		cout <<"Even"<< endl;
	else
		cout <<"Odd"<< endl;

	return 0;
}
