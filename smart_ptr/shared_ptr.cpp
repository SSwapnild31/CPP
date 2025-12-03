#include<iostream>
#include<memory>
using namespace std;

int main()
{
	shared_ptr<int> p1 = make_shared<int>(20);

	shared_ptr<int> p2 = p1;
	
	cout <<"p1 : "<< *p1 <<" p2 : "<< *p2 << endl;

	cout <<"use count : "<< p1.use_count() << endl;
	
	p2.reset();	//release owner
	p1.reset();
	cout <<"use count after reset : "<<p1.use_count() << endl;

	return 0;
}
