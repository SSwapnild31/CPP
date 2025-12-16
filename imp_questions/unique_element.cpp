#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	int arr[]={1,2,3,3,2};

	for(int &i : arr)
	{
		num = num ^ i;
	}

	cout <<"unique number : "<< num << endl;
	return 0;
}
