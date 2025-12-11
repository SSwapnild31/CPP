#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	int fact = num;
	
	for(int i=fact-1;i>0;i--)
	{
		fact = fact * i; 
	}

	cout <<"Factorial of "<< num <<" is "<< fact << endl;

	return 0;
}
