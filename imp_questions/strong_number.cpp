#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	int temp = num;
	int sum = 0;

	while(temp){
		int r = temp % 10;
		int rev = 1;
		while(r){
			rev *= r;
			r--;
		}
		sum += rev;
		temp /= 10;
	}
	
	if(num == sum){
		cout <<"Strong number"<< endl;
	}else{
		cout <<"Not Strong number"<< endl;
	}
	
	return 0;
}
