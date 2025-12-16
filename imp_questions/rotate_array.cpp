#include<iostream>

using namespace std;

int main()
{
	int num;
	
	cout <<"Enter size of arr : ";
	cin >> num;
	
	int *arr = new int[num];
	
	for(int i = 0; i < num ; i++) 
	{
		cin >> arr[i];
	}
	
	for(int i=0,j=num-1;i<j;i++,j--)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	for(int i = 0 ; i < num ; i++) {
		cout << arr[i] <<" ";
	}
	cout << endl;

	delete[] arr;

	return 0;
}
