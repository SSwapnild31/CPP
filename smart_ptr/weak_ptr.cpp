#include<iostream>
#include<memory>

using namespace std;


int main()
{
	shared_ptr<int> sp = make_shared<int>(20);
	weak_ptr<int>   wp = sp;				//weak reference

	cout <<"use count : "<< sp.use_count() << endl;
	
	if(auto temp = wp.lock())				//convert to shared ptr safely
		cout <<"weak_ptr  : "<< *temp << endl;
	else
		cout <<"object already deleted"<< endl;

	return 0;
}
