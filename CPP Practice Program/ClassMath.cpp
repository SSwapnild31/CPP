#include<iostream>
using namespace std;

class Math
{
	public : void display(int num)
	{
		if(num%2!=0)
		{
			cout<<"Number is odd";
		}
		else
		{
			cout<<"Number is Even";
		}
	}
};

int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	Math m;
	m.display(num);
	return 0;
}
