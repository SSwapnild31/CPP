#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v={20,10,30,60,50,40};
	
	sort(v.begin(),v.end());
	
	for(int i : v)
		cout << i <<" ";
	cout << endl;

	sort(v.begin(),v.end(),greater<int>());
	for(int i : v)
		cout << i <<" ";
	cout << endl;
		
	return 0;
}
