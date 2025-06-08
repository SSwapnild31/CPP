#include<iostream>
using namespace std;

int main()
{
	int num,i,sum=0;
	cout <<"Enter num : ";
	cin >> num;
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum + i;
	}
	if(num==sum && num!=0)
		cout <<"perfect"<< endl;
	else
		cout <<"not perfect"<< endl;
	
	return 0;
}
