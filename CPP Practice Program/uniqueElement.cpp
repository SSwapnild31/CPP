#include<iostream>
using namespace std;

int uniqueElement(int a[], int len){
	int res = 0;

	for(int i = 0; i < len; i++){
		res = res ^ a[i];
	}
	return res;
}


int main()
{
	int a[5];
	int len =sizeof(a)/sizeof(a[0]);

	for(int i = 0; i < len; i++){
		cin >> a[i];
	}

	cout << uniqueElement(a,len) << endl;
	
	return 0;
}
