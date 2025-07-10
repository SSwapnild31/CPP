#include<iostream>
using namespace std;

class B
{
	int x,y;
 public :
	B():x(0),y(0){ }
	B(int a,int b):x(a),y(b){ }
	
	void get_data()
	{
		cout << x <<" "<< y << endl;
	}
};

class A
{
	int m,n;
 public :
	A():m(0),n(0){ }
	A(int c,int d):m(c),n(d){ }
	
	operator B()
	{
		cout <<"conversion"<< endl;
		return B(m,n);
	}
};

int main()
{
	A a(100,200);
	B b;
	b.get_data();
	b = a;
	b.get_data();
	return 0;
}
