#include<iostream>
using namespace std;

int fun(int num)
{
	if(num == 0 || num == 1)
		return 1;

	return num * fun(num - 1);
}

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	cout << fun(num) << endl;	
	
	return 0;
}
