#include<iostream>
#include<deque>
using namespace std;

void print(deque<string>);

int main()
{
	deque<string> dq;
	dq.push_front("swapnil");
	dq.push_back("dipak");
	dq.push_back("chakri");
	dq.push_back("anil");
	
	print(dq);
	
	dq.push_front("divate");
	dq.push_back("param");
	
	cout <<"------------"<< endl;
	
	print(dq);
	
	return 0;
}

void print(deque<string> dq)
{
	for(const string &s : dq)
		cout << s << endl;
}
