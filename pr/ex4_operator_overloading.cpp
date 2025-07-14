#include<iostream>
using namespace std;

class A
{
	int a[5];
 public : 
	A()
	{
		for(int i=0;i<5;i++)
			a[i] = 0;
	}
	
	void operator () (int i,int j,int k,int l,int m)
	{
		a[0]=i,a[1]=j,a[2]=k,a[3]=l,a[4]=m;
	}
	
	int& operator [] (int I)
	{
		return a[I];
	}
	
	A operator = (A t)
	{
		for(int i=0;i<5;i++)
			a[i] = t.a[i];
		return *this;
	}
};

int main()
{
	A obj1,obj2,obj3;
	//obj1(10,20,30,40,50);
	for(int i=0;i<5;i++)
		cin >> obj1[i];
	
	obj3 = obj2 = obj1 ;
	for(int i=0;i<5;i++)
		cout << obj3[i] <<" ";
	cout << endl;
}
