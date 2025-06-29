#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l1;
	l1.push_front(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	cout << l1.size() << endl;				//list size
	l1.empty() ? cout << "Yes" : cout <<"No" ;	
	cout << endl;
	return 0;
}
