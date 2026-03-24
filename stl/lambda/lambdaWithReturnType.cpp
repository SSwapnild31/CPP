#include<iostream>
#include <iomanip>
int main()
{
	//receive arg as int and return as double
	auto value = [](int num) {
		return static_cast<double>(num);
	};
	
	int num;
	
	std::cout <<"Enter num : ";
	std::cin >> num;
	
	//Here, Then also it will print normal value 
	//std::cout <<"int to double : "<< value(num) <<"\n";

	//If we wan't with decimal, then need to write
	std::cout <<"int to double : "<< std::fixed << std::setprecision(2) << value(num) << "\n";
		
	return 0;
}
