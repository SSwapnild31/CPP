#include<iostream>
#include<memory>

std::unique_ptr<int> print(std::unique_ptr<int> ptr);

int main()
{
	
	std::unique_ptr<int> ptr = std::make_unique<int>(10);
	
	std::cout <<"In main before func call : "<< *ptr << std::endl;
	
	ptr = print(move(ptr));	//moving ownership to func
	
	//*ptr = 20;

	std::cout <<"In main after func call : "<< *ptr << std::endl;	
	
	return 0;
}

std::unique_ptr<int> print(std::unique_ptr<int> ptr)
{
	std::cout <<"In print function : "<< *ptr << std::endl;

	return ptr;	
}
