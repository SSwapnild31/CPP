#include<iostream>
using namespace std;

class A
{
 public :
	void add(float f)
	{
		cout << f << endl;
	}
	
	static void add(int x)
	{
		cout << x << endl;
	}
};

int main()
{
	A::add(10);
	/*A obj;
	obj.add(10.5);
	obj.add(11);*/
}
