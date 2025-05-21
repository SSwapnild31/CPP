#include<iostream>
using namespace std;

int main()
{
	bool a=10;
	
	cout << a << endl;		// 1 
	
	cout << sizeof(a) << endl;	//1 byte
	
	cout << boolalpha << a << endl;	//true in string form
	cout << noboolalpha;
	bool b="true" , c="false";
	bool d=true , e=false;
	
	cout << b <<" "<< c << endl;		// 1 
	cout << d <<" "<< e << endl;		// 1 
	
		
	return 0;
}
