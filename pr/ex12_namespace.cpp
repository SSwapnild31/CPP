#include<iostream>

namespace math{

	int sum(int a,int b){ return a+b; }
}

namespace std{

	int sub(int p,int q)
	{
		return p-q;
	}
}

int main()
{
	std::cout << std::sub(10,20)<< std::endl;
	
	return 0;
}
