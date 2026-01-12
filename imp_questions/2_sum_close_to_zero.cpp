#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >> n;
	
	int *a = new int[n];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	sort(a,a+n);
	int left = 0, right = n - 1;
	int mindiff = INT_MAX;

	while(left < right){
		int sum = a[left] + a[right];
		mindiff = min(mindiff,abs(sum));
		
		if(sum < 0){
			left++;
		}else{
			right--;
		}
	}
	cout <<"Diff closest to 0 : "<< mindiff << endl;
	return 0;
}
