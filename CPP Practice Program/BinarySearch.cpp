#include<iostream>
using namespace std;

int main()
{
	int a[10],n,i,key,first,last,mid,pos;
	cout<<"No. of elements -> ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" number -> ";
		cin>>a[i];
	}
	cout<<"Enter element to be searched...";
	cin>>key;
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==key)
		{
			pos=mid+1;
			break;
		}
		else if(a[mid]<=key)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	if(pos==-1)
	{
		cout<<"Element "<<key<<" is not found";
	}
	else
	{
		cout<<"Element "<<key<<" is found at position ->"<<pos;
	}
	return 0;
}
	
