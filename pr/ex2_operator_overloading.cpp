#include<iostream>

using namespace std;

class A
{
	int a,b;
 public :
	A():a(0),b(0){ }
	A(int x,int y):a(x),b(y){ }
	~A(){ }
	
	void get_data()
	{
		cout <<"a : "<< a <<" b : "<< b << endl;
	}
	
	friend A operator ++ (A &t);
	friend A operator ++ (A &t,int i);
};

A operator ++ (A &t)
{
	return A(++t.a,++t.b);
}

A operator ++ (A &t,int i)
{
	return A(t.a++,t.b++);
}
int main()
{
	A obj1(10,20),obj2;
	//obj2 = ++obj1;
	obj2 = obj1++;
	
	obj1.get_data();
	obj2.get_data();
	return 0;
}
