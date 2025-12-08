#include<iostream>
using namespace std;

int main()
{
	int a[5];
	cout <<"Enter 5 ele's"<< endl;
	for(int i=0;i<5;i++)
		cin >> a[i];
	
	for(int i=0;i<5-1;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int t = a[i];
				a[i]  = a[j];
				a[j] = t ;
			}
		}
	}
	cout <<"after sort : ";
	for(int i=0;i<5;i++)
		cout << a[i] <<" ";
	cout << endl;
	return 0;
}
