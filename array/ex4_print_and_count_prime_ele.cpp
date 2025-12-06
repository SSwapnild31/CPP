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
	int j,c = 0;
	int *p = a.p;
	for(int i=0;i<a.n;i++)
	{
		for(j=2;j<p[i];j++)
		{
			if(p[i]%j==0)
				break;
		}
		if(p[i]==j)
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
	cout <<"prime count : " << c << endl;
	return 0;
}
