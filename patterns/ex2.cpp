/*

      *
    * * *
  * * * * *
* * * * * * *

*/

#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3-i;j++)
			cout <<"  ";
		for(int k=0;k<=i*2;k++)
			cout <<"* ";
		cout << endl;
	}
	return 0;
}
