#include<iostream>
using namespace std;

int main()
{
	char *s=new char[20];
	int c=0;

	cout <<"Enter string : ";
	cin.getline(s,20);
	
	for(int i=0;s[i];i++)
		c++;
	
	cout <<"string length : "<< c << endl;
	
	return 0;
}
