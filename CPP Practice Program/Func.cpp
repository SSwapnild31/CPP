#include<iostream>
using namespace std;

void swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping : \n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers to be swapped : ";
	cin>>a>>b;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	swap(a,b);
}
