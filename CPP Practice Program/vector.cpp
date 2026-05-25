#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr = {1,2,3,4};

	for(auto n : arr){
		n *= 2;
	}

	for(auto n : arr){
		std::cout << n <<" ";
	}
	std::cout << std::endl;

	return 0;
}
