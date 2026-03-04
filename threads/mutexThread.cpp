#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment(){
	for(int i=0;i<1000;i++){
		mtx.lock();
		counter++;
		mtx.unlock();
		cout << i << endl;
	}
}

int main()
{
	thread t1(increment);
	thread t2(increment);
	
	t1.join();
	t2.join();

	return 0;
}
