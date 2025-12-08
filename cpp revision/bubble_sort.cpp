#include<iostream>
using namespace std;

int main()
{
	int a[5];
	cout <<"Enter 5 arr ele's"<< endl;
	for(int i=0;i<5;i++)
		cin >> a[i];
	
	for(int i=0;i<5-1;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t = a[j];
				a[j]  = a[j+1];
				a[j+1]= t;
			}
		}
	}

	cout <<"after sort : "<< endl;
	for(int i=0;i<5;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
