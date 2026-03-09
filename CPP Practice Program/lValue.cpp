#include<iostream>

//int getValue(int& x){		//this will give error
int getValue(const int& x){
	return x;
}

int main()
{
	int a = 10;
	
	std::cout << getValue(a) << std::endl;
	std::cout << getValue(10) << std::endl;	//for this one
	
	return 0;
}
