#include<iostream>
using namespace std;

void fun(int num)
{
	static int pos = 31;
	if(pos<0)
		return ;
	cout <<(num>>pos&1);
	if(pos%8==0)
		cout <<" ";
	pos--;
	fun(num);
	pos = 31;
}

int main()
{
	int num;
	cout <<"Enter num : ";
	cin >> num;
	fun(num);
	cout << endl;
	return 0;
}
