#include<iostream>
using namespace std;

int main()
{
	int a[5],key;
	cout <<"Enter 5 arr ele's"<< endl;
	for(int i=0;i<5;i++)
		cin >> a[i];
	cout <<"Enter ele to search : ";
	cin >> key;
	
	for(int i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			cout <<"key found at "<< i <<" location"<<endl;
			return 0;
		}
	}
	cout <<"element not present"<< endl;
	return 0;
}
