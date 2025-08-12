#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v={10,20,30,40,50};
	
	reverse(v.begin(),v.end());
	
	for(int i: v)
		cout << i <<" ";
	cout << endl;
	
	return 0;
}
