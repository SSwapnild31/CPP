#include<iostream>
using namespace std;

class base
{

public:
	template<class T>
	void sort_arr(T &v, int ele){
		
		for(int i=0;i<ele-1;i++){
			for(int j=0;j<ele-i-1;j++){
				if(v[j]>v[j+1]){
				      int temp = v[j];
					v[j] = v[j+1];
					v[j+1] = temp;
				}
			}
		}
	}
};

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >> n;
	
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	cout <<"Before sort"<< endl;
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
	
	base b;
	b.sort_arr(a, n);
		
	cout <<"Before sort"<< endl;
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;

	return 0;
}
