#include<iostream>
#include<thread>
using namespace std;

void task_helper(string msg){
	cout <<"Task says : "<< msg << endl;
}

int main()
{
	thread t(task_helper, "Hello");
	
	t.join();

	cout <<"Main thread completed"<< endl;
	
	return 0;
}
