#include<iostream>
using namespace std;

void display(int a, float b)
{
	cout <<"display 1"<< endl;
}
void display(string s)
{
	cout <<"display 2"<< endl;
}

int main()
{
	display(10,20.0f);
	display("swapnil");
	
	return 0;
}
