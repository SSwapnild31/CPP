#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v = {3,2,1,5,6,4};
	int k;
	
	cout <<"Enter k : ";
	cin >> k;
	
	sort(v.begin(), v.end(), greater<int>());

	cout <<"kth largest ele : "<< v[k - 1] << endl;
	return 0;
}
