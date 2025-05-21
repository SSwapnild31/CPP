#include<iostream>
using namespace std;

int main()
{
	string s1 ,s2;
	cout <<"Enter s1 & s2 strings"<< endl;
	cin >> s1 >> s2;
	
	//swap(s1,s2);
	s1.swap(s2);
	
	cout <<"s1 : "<< s1 << endl;
	cout <<"s2 : "<< s2 << endl;
}
