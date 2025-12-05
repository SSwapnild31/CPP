#include<iostream>
using namespace std;

int main()
{
	int a[5],key;
	int n = sizeof(a)/sizeof(a[0]);
	
	cout <<"enter arr ele's"<< endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	cout <<"Enter element to search : ";
	cin >> key;

	int first = 0;
	int last  = n-1;
	
	while(first<=last)
	{
		int mid = (first+last)/2;
		if(a[mid]==key)
		{
			cout <<"key found at "<< mid <<" position"<< endl;
			return 1;
		}
		else if(key>=a[mid])
		{
			first = mid + 1;
		}
		else
			last = mid - 1;
	}
	
	cout <<"element not present"<< endl;

	return 0;
}
