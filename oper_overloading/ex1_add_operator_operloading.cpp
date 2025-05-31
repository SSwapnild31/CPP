#include<iostream>
using namespace std;

class Complex
{
	int real,img;

public : Complex():real(0),img(0){ }
	 Complex(int a,int b):real(a),img(b){ }
	 
	 void getComplex()
	 {
	 	cout << real <<" "<< img << endl;
	 }
	 
	 Complex operator +(Complex t)
	 {
	 	cout <<"+ operator fun overloaded"<< endl;
	 	Complex ret;
	 	ret.real = real + t.real;
	 	ret.img  = img + t.img;
	 	return ret;
	 }
};

int main()
{
	Complex c1(10,20),c2(100,200),c3;
	c3 = c1 + c2;
	
	c3.getComplex();
	return 0;
}
