#include<iostream>
using namespace std;

class A
{
public :
	A(){
		cout <<"constructor"<< endl;
		throw 130;
	}
	~A(){
		cout <<"destructor"<< endl;
	}
};

int main()
{
	try{
		A obj;
	}
	catch(int a){
		cout <<"obj not created.!"<< endl;
		cout <<"constructor failed with value "<< a << endl;
	}	
	
	return 0;
}
