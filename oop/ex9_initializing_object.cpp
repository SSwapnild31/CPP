#include<iostream>
using namespace std;
class A
{
 public :
	int x,y;
	void get_data()
	{
		cout<< x <<" "<< y << endl;
	}
	
};

int main()
{
	A obj={10,20};
	obj.get_data();
	return 0;
}
