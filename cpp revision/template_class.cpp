#include<iostream>
using namespace std;

template<typename type>
class info
{
	type x;
public :
	info(type t)
	{
		x = t;
	}
	void get_data()
	{
		cout <<"x : "<< x << endl;
	}
};


int main()
{
	info i(10.5);
	i.get_data();
	return 0;
}
