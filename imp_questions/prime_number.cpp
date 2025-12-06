#include<iostream>
using namespace std;

int main()
{
	int num, i;
	cout <<"Enter number : ";
	cin >> num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
	{
		cout <<"Prime"<<endl;
		return 0;
	}
	cout <<"Not prime"<< endl;

	return 0;
}
