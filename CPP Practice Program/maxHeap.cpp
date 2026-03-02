#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> pq;
	
	pq.push(20);
	pq.push(10);
	pq.push(30);
	pq.push(5);
	
	cout <<"Top element : "<< pq.top() << endl;

	return 0;
}
