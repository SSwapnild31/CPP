#include<iostream>
#include<fstream>
using namespace std;

int main()
{
				//char s[20];
	string s1;
	ifstream fin;

	fin.open("data");
				//fin.getline(s,20);
	getline(fin,s1);
				//cout << s << endl;
	cout << s1 << endl;
	return 0;
}
