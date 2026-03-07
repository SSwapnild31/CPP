#include<iostream>
namespace snd{
	int cout(std::string str){
		return str.size();
	}
};

int main()
{
	std::cout << snd::cout("Swapnil") << std::endl;	
	return 0;
}
