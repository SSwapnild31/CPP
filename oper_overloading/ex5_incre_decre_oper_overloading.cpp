#include<iostream>
using namespace std;

class A
{
	int x,y;
public :
	A():x(0),y(0) { }
	A(int a,int b):x(a),y(b) { }
	~A() { }
	
	void get_data()
	{
		cout << x <<" "<< y << endl;
	}
	friend A operator ++ (A &t,int);
	friend A operator ++ (A &t);
};

A operator ++ (A &t,int)
{
	cout <<"post overloaded"<< endl;
	return A(t.x++,t.y++);
}

A operator ++ (A &t)
{
	cout <<"pre overloaded"<< endl;
	return A(++t.x,++t.y);
}

int main()
{
	A obj1(10,20),obj2;
	//obj2=obj1++;
	obj2=++obj1;
	obj1.get_data();
	obj2.get_data();	
	return 0;
}
