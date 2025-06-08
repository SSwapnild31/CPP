#include<iostream>
using namespace std;

int main()
{
	int num,temp,rev=0;
	cout <<"Enter num : ";
	cin >> num;
	
	for(temp=num;temp;temp/=10)
	{
		rev = rev * 10 + (temp%10);
	}
	if(rev==num)
		cout <<"palindrome"<< endl;
	else
		cout <<"not palindrome"<< endl;
	return 0;
}
