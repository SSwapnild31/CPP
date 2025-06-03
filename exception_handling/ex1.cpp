#include<iostream>
using namespace std;

int division(int a,int b)
{
	if(b==0)
		throw "dividing by zero!";
	else
		return a/b;
}

int main()
{
	int a,b,res;
	cin >> a >> b;
	try{
		/*if(b==0)
			throw "dividing by zero";
		res = a / b;
		cout <<"Result : "<< res << endl;*/

		res = division(a,b);
		cout <<"Result : "<< res << endl;
	}
	catch(const char *s){
		cout <<"Exception : "<< s << endl;
	}
	cout <<"End of code"<< endl;
	return 0;
}
