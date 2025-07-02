#include<iostream>
#include<deque>
using namespace std;

void print(deque<int>);

int main()
{
	deque<int> dq;
	dq.push_front(05);
	dq.push_front(10);
	dq.push_front(20);
	dq.push_back(30);
	dq.push_back(40);
	
	print(dq);
	
	dq.pop_front();
	dq.pop_back();
	
	print(dq);

	return 0;
}

void print(deque<int> dq)
{
	for(int i : dq)
		cout << i <<" ";
	cout << endl;
}
