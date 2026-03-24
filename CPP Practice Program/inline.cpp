#include<iostream>

inline int product(int num){
	return num * num;
}

int main()
{
	int num;
	
	std::cout <<"Enter num : ";
	std::cin >> num;
	
	std::cout <<"product : "<< product(num) << std::endl;
	
	return 0;
}
