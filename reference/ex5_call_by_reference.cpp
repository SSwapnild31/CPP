#include<iostream>
using namespace std;

void swap_data(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

int main()
{
	int x=10,y=20;
	swap_data(x,y);
	cout << x << " " << y <<endl;
	return 0;
}
