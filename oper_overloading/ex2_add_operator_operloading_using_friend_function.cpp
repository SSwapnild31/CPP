#include<iostream>
using namespace std;

class Complex
{
	int real,img;

public : 
	Complex():real(0),img(0){ }
	Complex(int x,int y):real(x),img(y){ }
	
	void get_data()
	{
		cout << real <<" "<< img << endl;
	}
	
	friend Complex operator +(Complex t1,Complex t2);
};

Complex operator +(Complex t1,Complex t2)
{
	Complex t;
	cout <<"+ op overloaded using friend fun"<< endl;
	t.real = t1.real + t2.real;
	t.img = t1.img + t2.img;
	return t;
}

int main()
{
	Complex c1(10,20),c2(100,200),c3;
	
	c3=c1+c2;
	c3.get_data();	
	
	return 0;
}
