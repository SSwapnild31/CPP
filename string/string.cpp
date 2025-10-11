#include<iostream>
using namespace std;

void display(string);

int main()
{
	string str;
	cout<<"Enter a string : ";
	cin>>str;
	display(str);
	return 0;
}

void display(string s)
{
	cout<<"Entered string is "<<s;
}
