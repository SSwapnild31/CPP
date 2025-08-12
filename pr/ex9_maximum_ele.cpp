#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v={10,40,20,60,50,30};
	
	auto it = max_element(v.begin(),v.end());
	
	cout <<"max element : "<< *it << endl;

	int index = distance(v.begin(), it);
	
	cout <<"index of max ele : "<< index << endl;
	
	return 0;
}
