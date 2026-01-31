#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
	vector<int> v = {37,41,23,17,12};
	
	priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());
	
	cout <<"Min ele : "<< pq.top() << endl;
	
	return 0;
}
