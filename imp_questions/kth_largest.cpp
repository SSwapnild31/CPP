#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int kth_largest(vector<int> v, int k){

        int n = v.size();

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < n; i++){

                pq.push(v[i]);

                if(pq.size() > k){
                        pq.pop();
                }
        }
        return pq.top();
}

int main()
{
        vector<int> v = {14,9,31,29,23};

        int k;

        cout <<"Enter k : ";
        cin >> k;

        cout <<"kth largest ele: "<< kth_largest(v, k) << endl;

        return 0;
}
