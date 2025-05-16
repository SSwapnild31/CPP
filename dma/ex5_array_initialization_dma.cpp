#include<iostream>
using namespace std;

int main()
{
	int *p;
	p=new int[5]{10,20,30,40,50};
	
	for(int i=0;i<5;i++)
		cout << p[i] <<" ";
	cout << endl;
	delete []p;
}
