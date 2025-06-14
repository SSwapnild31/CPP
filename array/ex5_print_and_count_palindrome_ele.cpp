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
	int rev,c = 0;
	int *p = a.p;
	for(int i=0;i<a.n;i++)
	{
		int temp = p[i];
		rev = 0;
		while(temp)
		{
			int r = temp % 10;
			rev = rev * 10 + r;
			temp = temp / 10;
		}
		if(p[i]==rev)
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
	cout <<"palindrome count : " << c << endl;
	return 0;
}
