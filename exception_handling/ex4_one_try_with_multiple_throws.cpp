#include<iostream>
using namespace std;

int main()
{
	try{
		throw 10;
	}
	catch(int a){
		cout << a << endl;
	}
	catch(float a){
		cout << a << endl;
	}
	catch(char *p){
		cout << p << endl;
	}
	catch(...){
		cout <<"default throw"<< endl;
	}
	
	return 0;
}
