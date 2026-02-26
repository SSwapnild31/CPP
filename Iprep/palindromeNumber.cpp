#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	int temp = num;
	int rev = 0;
	while(temp){
		int r = temp % 10;
		rev = rev * 10 + r;
		temp = temp / 10;
	}
	if(rev == num){
		cout <<"palindrome number"<< endl;
	}else{
		cout <<"not palindrome"<< endl;
	}

	return 0;
}
