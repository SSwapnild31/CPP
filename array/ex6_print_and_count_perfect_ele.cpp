#include<iostream>
using namespace std;

class A
{
	int *p,n;
public :
	A()
	{
		cout <<"Enter array size : ";
		cin >> n;
		p = new int[n];
	}
	void set_data()
	{
		cout <<"Enter ele"<< endl;
		for(int i=0;i<n;i++)
			cin >> p[i];
	}
	~A(){
		delete []p;
	}

	friend int fun(A&);
};

int fun(A &a)
{
	int sum,c = 0;
	int *p = a.p;
	for(int i=0;i<a.n;i++)
	{
		sum = 0;
		for(int j=1;j<p[i];j++)
		{
			if(p[i]%j==0)
				sum += j;
		}
		if(p[i]==sum)
		{
			c++;
			cout << p[i] <<" ";
		}
		
	}
	cout << endl;
	return c;
}

int main()
{
	A obj;
	obj.set_data();
	int c = fun(obj);
	cout <<"perfect count : " << c << endl;
	return 0;
}
