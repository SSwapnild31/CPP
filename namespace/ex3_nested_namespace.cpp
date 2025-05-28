#include<iostream>
using namespace std;

namespace A
{
	int x=10;
	namespace B
	{
		int y=30;
	}
}

int main()
{
	cout << A::B::y << endl;
	cout << A::x << endl;
	return 0;
}
