#include<iostream>
#include<thread>

void helloThread(){
	std::cout <<"In hello thread"<< std::endl;
}

int main()
{
	std::thread t(helloThread);	//create thread
	t.join();	//wait to thread finish
	std::cout <<"In main thread"<< std::endl;
	return 0;
}
