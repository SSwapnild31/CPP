#include<iostream>

using namespace std;

int main()
{
	int x;
	cout << showbase << uppercase << showpos ;
	cout <<"Enter hex : "<< endl;
	cin >> hex >> x;
	
	cout <<"hex:"<< hex << x <<" oct:"<< oct << x <<" dec:"<< dec << x << endl;
	return 0;
}
