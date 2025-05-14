#include<iostream>
using namespace std;

int main()
{
	/*
	int x=10;
	int *p=&x;
	int* &rp=p; 
	cout <<"*p:"<< *p <<" rp:"<< *rp << endl;
	*/
	
	int x=10,y=20;
	int *p=&x;
	int *q=&y;
	int* &rp=p;
	int* &rq=q;
	rq=rp;
	cout << x << y << *p << *q << *rp << *rq <<endl;
	return 0;
}
