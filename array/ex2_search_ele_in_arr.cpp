#include<iostream>
using namespace std;

class A
{
	int *arr;
public :
	A(int n){
		arr = new int[n];
	}
	void set_data(int n)
	{
		cout <<"Enter ele's : "<< endl;
		for(int i=0;i<n;i++)
			cin >> arr[i];
	}
	
	void get_data(int n)
	{
		for(int i=0;i<n;i++)
			cout << arr[i] <<" ";
		cout << endl;
	}
	~A(){
		delete []arr;
	}
	friend void arrdel(A &obj,int &,int); 
};

void arrdel(A &obj,int &n,int del)
{
	for(int i=0;i<n;i++)
	{
		if(obj.arr[i]==del)
		{
			for(int j=i;j<n;j++)
				obj.arr[j]=obj.arr[j+1];
			n--;
		}
	}
}

int main()
{
	int n,del;
	cout <<"Enter arr size : ";
	cin >> n;
	
	cout <<"Enter ele to delete : ";
	cin >> del;
	
	A obj(n);
	
	obj.set_data(n);
	arrdel(obj,n,del);
	
	cout <<"after deletion : ";
	obj.get_data(n);
}
