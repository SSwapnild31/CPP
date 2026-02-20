#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 2){
		cout <<"Usage : require 2 arguments\n";
		return 1;
	}
	
	float num = atof(argv[1]);

	cout << num <<" "<< endl;
	//cout << argv[1] + argv[1] << endl;	compiletime error

	return 0;
}
