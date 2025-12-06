#include<iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cout <<"Enter number : ";
	cin >> num;
	
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum + i;
	}
	if(sum==num)
	{
		cout <<"Perfect number"<< endl;
		return 0;
	}
	cout <<"Not perfect!"<< endl;
	return 0;
}
