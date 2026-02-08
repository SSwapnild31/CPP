#include<iostream>
using namespace std;

int func(int &a, int n){
	
	int freq[256] = {0};
	int count = 0, lst_freq = 0;

	for(int i=0; i<n; i++){
		freq[(unsigned int)a[i]]++;

		if(freq[(unsigned int)a[i]] != lst_freq){
			count++;
			lst_freq = freq[(unsigned int)a[i]];
		}
	}
	return count;
}

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >> n;
	
	int a[n];
	cout <<"Enter arr ele's"<< endl;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	cout <<" "<< func(a,n) << endl;

	return 0;
}
