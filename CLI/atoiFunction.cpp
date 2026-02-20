#include<iostream>
using namespace std;

int atoiFunction(const char *arg){
	int i = 0;
	int num = 0;

	if(arg[0] == '-' || arg[0] == '+') {
		i = 1;
	}

	while(arg[i]) {
		if(arg[i] >= '0' && arg[i] <= '9'){
			num = num * 10 + (arg[i] - '0');
			i++;
		}
		else { 
			break; 
		}
	}

	if(arg[0] == '-'){
		num = -num;
	}
	return num;
}

int main(int argc, char *argv[])
{
	if(argc != 2){
		cout <<"Usage : require 2 arguments" << endl;
		return 1;
	}

	int num = atoiFunction(argv[1]);
	cout <<"num : "<< num << endl;

	return 0;
}
