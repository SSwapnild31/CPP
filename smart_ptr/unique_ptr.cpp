#include<iostream>
#include<memory>
using namespace std;

int main()
{
	unique_ptr<int> p = make_unique<int>(10);

	cout <<"p value : "<< *p << endl;
	
	//unique_ptr<int> p2 = p;	//error(No copy allowed)
	
	unique_ptr<int> p1 = move(p);

	if(!p)
		cout <<"p is now null"<< endl;

	cout <<"p1 value : "<< *p1 << endl;
	
	return 0;
}
