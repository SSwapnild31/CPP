#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout <<"Enter num : ";
	cin >> num;

	if(num<=1)
	{
		cout <<"not prime"<< endl;
		return 0;
	}
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		cout <<"prime"<< endl;
	else
		cout <<"not prime"<< endl;
	
	return 0;
}
