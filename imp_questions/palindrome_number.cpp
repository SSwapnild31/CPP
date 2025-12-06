#include<iostream>
using namespace std;

int main()
{
	int num,rev = 0;

	cout <<"Enter number : ";
	cin >> num;

	int temp = num;

	while(temp!=0)
	{
		int r = temp % 10;
		rev = rev * 10 + r;
		temp = temp / 10;
	}
	if(num==rev)
	{
		cout <<"palindrome number"<< endl;
		return 1;
	}
	cout <<"not palindrome!"<< endl;
	
	return 0;
}
