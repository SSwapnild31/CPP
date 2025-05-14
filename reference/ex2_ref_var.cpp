#include<iostream>
using namespace std;

int main()
{
	/*
	const int x=10;
	int &y=x;			//Error
	const int &y=x;
	cout <<"x : "<< x <<" y : "<< y << endl;
	*/


	/*int x=10,y=20;;
	int &rv=x;
	int &rv=y;			//error
	*/
	

	/*
	int x=10,z=20;
	int &y=x;
	y=z;				//correct
	cout <<"x : "<< x <<" y : "<< y << endl;
	*/

	//one variable multiple references	
	int x=10;
	int &x1=x;
	int &x2=x1;
	int &x3=x2;
	cout <<"x:"<< x <<" x1:"<< x1 <<" x2:"<< x2 <<" x3:"<< x3 << endl;
	
	return 0;
}
