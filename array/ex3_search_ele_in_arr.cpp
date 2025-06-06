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
	~A(){
		delete []arr;
	}
	friend int search_ele(A&,int,int); 
};

int search_ele(A &obj,int n,int ser)
{
	for(int i=0;i<n;i++)
	{
		if(obj.arr[i]==ser)
			return i;
	}
	return -1;
}

int main()
{
	int n,ser;
	cout <<"Enter arr size : ";
	cin >> n;
	cout <<"Enter ele to search : ";
	cin >> ser;
	A obj(n);
	obj.set_data(n);
	int pos = search_ele(obj,n,ser);
	if(pos>=0)
		cout <<"found at pos : "<< pos << endl;
	else
		cout <<"ele not present..!"<< endl;
}
