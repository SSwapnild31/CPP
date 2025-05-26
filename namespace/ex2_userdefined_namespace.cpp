#include<iostream>
using namespace std;

namespace v24be7
{
	int id=7;
	string al="arun";
}

namespace v24be8
{
	int id=2;
	string al="akash";
}

int main()
{
	cout << v24be7::al << endl;
	cout << v24be7::id+v24be8::id << endl;
}
