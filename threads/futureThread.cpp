#include<iostream>
#include<future>

int compute(int x){
	return x;	//return 50
}

int main()
{
	std::future<int> f = std::async(compute, 10);
	std::cout << f.get() << std::endl;
	
	return 0;
}
