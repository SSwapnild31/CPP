/*

1
13
135
1357
13579

*/

#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<6;i++)
	{
		int num = 1;
		for(int j=1;j<=i;j++)
		{
			cout << num;
			num += 2;
		}
		cout << endl;
	}
	return 0;
}
