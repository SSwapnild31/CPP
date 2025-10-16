#include<iostream>
using namespace std;

class classB;

class classA
{
	private :
		int numA;
		
	friend int add(classA,classB);
	
	public :
		classA()
		{
			numA=12;
		}
};

class classB
{
	private :
		int numB;
		
	friend int add(classA,classB);
	
	public :
		classB()
		{
			numB=1;
		}
};

int add(classA objectA,classB objectB)
{
	return(objectA.numA+objectB.numB);
}

int main()
{
	classA objectA;
	classB objectB;
	cout<<"Sum : "<<add(objectA,objectB);
	return 0;
}
