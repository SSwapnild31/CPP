#include<iostream>
using namespace std;

bool checkPow(int n)
{
	if(n > 0 && (n & (n -1)) == 0)
	{
		return true;
	}
	return false;
}


int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;

	if(checkPow(num)){
		cout <<"Yes"<< endl;
	}
	else{
		cout <<"No"<< endl;
	}
	
	return 0;
}
