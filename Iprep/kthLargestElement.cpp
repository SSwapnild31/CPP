//using min Heap(Priority Queue)  TC : O(n log k)

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthLargest(vector<int> &v, int k){
	priority_queue<int, vector<int>, greater<int>> pq;

	for(int num : v){
		pq.push(num);

		if(pq.size() > k){
			pq.pop();
		}
	}

	return pq.top();
}

int main()
{
	vector<int> v = {3,2,1,5,6,4};
	int k;
	
	cout <<"Enter k : ";
	cin >> k;
	
	cout <<"Kth largest ele : "<<kthLargest(v, k) << endl;

	return 0;
}
