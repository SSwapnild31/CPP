#include<iostream>
using namespace std;

namespace my 
{
	string name = "Swapnil";
}

string name = "Divate";

int main()
{
	cout << name << endl;
	cout << my::name << endl;
	
	return 0;
}
