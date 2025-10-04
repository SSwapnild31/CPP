#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	vector<int> v={1,2,3,2,1,4,5,2,3};
	map<int,int> m;

	for(auto i : v)
		m[i]++;
	
	for(auto &i : m)
		cout<<i.first<<" "<<i.second<<" "<< endl;

	return 0;
}
