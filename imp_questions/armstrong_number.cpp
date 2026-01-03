#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;

	int temp;
	int count = 0;
	int sum = 0;

	for(temp = num; temp; count++, temp /= 10);
	temp = num;
	
	while(temp){
		int r = temp % 10;
		int c = count;
		int rev = 1;
		while(c){
			rev *= r;
			c--;
		}
		sum += rev ;
		temp /= 10;
	}

	if(num == sum){
		cout <<"Armstrong"<< endl;
	}else{
		cout <<"Not Armstrong"<< endl;
	}
	return 0;
}
