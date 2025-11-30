#include<iostream>
using namespace std;

class Data
{
public : 
	Data()
	{
		cout <<"constructor"<< endl;
	}
	~Data()
	{
		cout <<"destructor"<< endl;
	}
};

int main()
{
	Data d;
	
	return 0;
}
