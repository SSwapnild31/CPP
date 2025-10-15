#include<iostream>
using namespace std;

class A
{
	public :
	virtual void sum();
	virtual int Multiply();
};

class B : A
{
	void sum() final;

	void Multiply() final;
};

int main()
{
	B b;
	b.sum();
	b.Multiply();
	return 0;
}
