#include<iostream>
using namespace std;

int main()
{
	string s;
	cout <<"Enter string : ";
	getline(cin, s);
	
	char res = 0;
	
	for(int i=0;i<s.size();i++){
		res = res ^ s[i];
	}
	
	cout <<"unique char : "<< res << endl;
	
	return 0;
}
