/*
*
**
***
****
*****
*/


#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char **argv)
{
	int n;
	n=atoi(argv[1]);
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<=i;k++)
			cout <<"*";
		cout << endl ;
	}
	return 0;
}
