#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;
	
	int res, first = 0 , second = 1 ;

	for(int i=0;i<num;i++)
	{
		cout << first <<" ";
		res = first + second;
		first = second;
		second = res;
	}
	cout << endl;
	return 0;
}
