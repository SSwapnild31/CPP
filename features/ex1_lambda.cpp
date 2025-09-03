#include<iostream>
using namespace std;

int main()
{
	auto a=[](){
		cout <<"lambda"<< endl;
	};

	a();
	
	return 0;
}
