#include<iostream>
using namespace std;

int main()
{
	char s[50];
	cout <<"Enter string : ";
	cin >> s;

	char *p=s,*q=s;
	
	while(*q)
		q++;
	q--;
	
	while(p<q)
	{
		if(*p!=*q)
		{
			cout<<"Not palindrome"<< endl;
			return 1;
		}
		p++;
		q--;
	}	
	cout <<"Palindrome string"<< endl;
	return 0;
}
