#include<iostream>
using namespace std;

int data(int &&d){
	return d;
}

int main()
{
	int num;
	cout <<"Enter num : ";
	cin >> num;

	data(num);
	cout <<"num : "<< num << endl;
	return 0;
}
