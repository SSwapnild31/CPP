#include<iostream>
using namespace std;

int main()
{
	try{
		throw 15.5;
	}
	catch(int a){
		cout <<"Exception accured!"<< a << endl;
	}
	cout <<"End"<< endl;
	return 0;
}
