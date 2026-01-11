#include<iostream>
using namespace std;

int missingNumber(int a[], int n){
	
	n = n + 1;
	int totalsum = n * (n + 1)/2;
	int arrsum = 0;

	for(int i = 0; i < n; i++){
		arrsum += a[i];
	}
	
	return totalsum - arrsum;
}


int main()
{
	int a[4];
	int len = sizeof(a)/sizeof(a[0]);

	for(int i = 0; i < len; i++){
		cin >> a[i];
	}

	cout << missingNumber(a, len)<< endl;
	
	return 0;
}
