//Example of command line input 

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 2){
		cout <<"USAGE: requires 2 arguments"<< endl;
		return 1;
	}
	
	cout <<"Done"<< endl;
	
	return 0;
}
