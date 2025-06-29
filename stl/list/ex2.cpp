#include<iostream>
#include<list>
using namespace std;

int main()
{
	//list<int> l1(10,100);	//10 is a size and 10 ele's initialized with 100
	
	list<int> l1={10,20,30,40,50};
	l1.push_front(05);
	l1.push_back(60);
	
	cout << l1.front() << endl;	//access first ele
	cout << l1.back() << endl;	//access last ele

	
	
	return 0;
}
