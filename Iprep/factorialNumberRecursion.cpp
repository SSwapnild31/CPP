#include <iostream>

int factNumber(int num){
	
	if(num == 0 || num == 1)
		return 1;
	return num * factNumber(num - 1);
}

int main()
{
	int num;
	std::cout <<"Enter number : ";
	std::cin >> num;
	
	std::cout << factNumber(num) << std::endl;
}
