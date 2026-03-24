#include<iostream>

int main()
{
	int counter = 0;
	
	//mutable allows copy captured variable modification inside here
	auto msg = [counter]() mutable {
		counter++;
		std::cout <<"In lambda : "<< counter <<"\n";
	};
	
	msg();
	msg();
	
	//but in main, counter value will be original
	std::cout <<"In main : "<< counter << std::endl;
	
	return 0;
}
