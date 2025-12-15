#include<iostream>
using namespace std;

int main()
{
	int a[4]={1,5,2,4};
	int n = sizeof(a)/sizeof(a[0]);
	
	
	int num = n + 1;
	int totalSum = num * (num + 1) / 2;	
	
	int arrSum = 0;
	for(int i=0;i<n;i++)
	{
		arrSum = arrSum + a[i];
	}

	cout <<"missing number : "<< totalSum - arrSum << endl;
}
