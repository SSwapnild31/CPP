#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	//string s;
	char s[50];
	cout <<"Enter string : ";
	//getline(cin,s);
	cin >> s;
	
	int len = strlen(s);

	for(int i=0,j=len-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			cout<<"Not palindrome"<< endl;
			return 1;
		}
	}	
	cout <<"Palindrome string"<< endl;
	return 0;
}
