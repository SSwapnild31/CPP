#include<iostream>
using namespace std;

int main()
{
	int *p,i;
	p=new int[5];
	cout <<"enter arr ele"<< endl ;
	for(i=0;i<5;i++)
		cin >> p[i];
	
	for(i=0;i<5;i++)
		cout << p[i] <<" ";
	cout << endl;
	
	delete []p;
}
