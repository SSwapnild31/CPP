#include<iostream>
using namespace std;

class Array
{
	int a[5];
	
public : 
	Array()
	{
		for(int i=0;i<5;i++)
			a[i]=0;
	}
	
	void operator ()(int b,int c,int d,int e,int f)
	{
		a[0]=b,a[1]=c,a[2]=d,a[3]=e,a[4]=f;
	}
	
	Array operator = (Array t)
	{
		for(int i=0;i<5;i++)
			a[i]=t.a[i];
		return *this;
	}
	
	int& operator [](int I)
	{
		return a[I];
	}

};


int main()
{
	Array obj1,obj2,obj3;
	obj1(10,20,30,40,50);
	
	for(int i=0;i<5;i++)
		cin >> obj1[i];
	
	obj3=obj2=obj1;
	
	for(int i=0;i<5;i++)
		cout << obj2[i] <<" ";
	cout << endl;
	
	return 0;
}
