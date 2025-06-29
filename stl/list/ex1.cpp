#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l1={10,20,30,40,50};
	
	list<int>::iterator it;
	it = l1.begin();
	advance(it,3);		//it will point 3rd index, means here 40
	//for(int i : l1)	
	cout << *it << endl;

	return 0;
}
