#include<iostream>
using namespace std;

int x = 10;
int main()
{
	int y = 20;
	auto fun=[&y](){
	
		cout <<"x : "<< x << endl;
		cout <<"y : "<< y << endl;
		y = 30;
	};
	fun();
	cout <<"y : "<< y << endl;
	return 0;
}
