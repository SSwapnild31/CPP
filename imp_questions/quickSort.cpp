#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >> n;

	int *v = new int[n];

	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	for(int i=0;i<n;i++){
		cout << v[i] <<" ";
	}
	cout << endl;

	return 0;
}
