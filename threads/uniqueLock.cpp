#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;

void worker(){
	unique_lock<mutex> lock(mtx);
	lock.unlock();
	lock.lock();
}
