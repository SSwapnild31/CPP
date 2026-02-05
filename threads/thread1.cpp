#include<iostream>
#include<thread>
using namespace std;

int main()
{
	string msg = "Hello from thread!";
	
	thread t1([=](){
		cout << msg << endl;
	});

	thread t2([=](){
		cout << msg << endl;
	});

	t1.join();
	t2.join();
	
	cout <<"Main thread completed"<< endl;

	return 0;
}
