#include<iostream>
using namespace std;

int main()
{
	/*
	int a[5]={10,20,30,40,50};
	int (&arr)[4]=a;		//error array size should match
	int (&arr)[6]=a;		// 'cause this also wrong
	*/
	
	int a[5]={10,20,30,40,50};
	int (&arr)[5]=a;		

	for(int i=0;i<5;i++)
		cout << arr[i] <<" ";
	cout << endl;
	return 0;
}

