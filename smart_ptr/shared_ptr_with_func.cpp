#include<iostream>
#include<memory>

void print(std::shared_ptr<int> ptr)
{
	std::cout <<"In function : "<< *ptr << std::endl;
}

int main()
{
	std::shared_ptr<int> ptr = std::make_shared<int>(10);
	
	std::cout <<"In main before func call : "<< *ptr << std::endl;
	
	print(ptr);
	
	std::cout <<"In main after func call : "<< *ptr << std::endl;
	
	return 0;
}
