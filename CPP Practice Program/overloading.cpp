#include<iostream>
using namespace std;

class base
{
public:
	void display(int number){
		cout <<"int function : "<< number << endl;	
	}
	void display(float number){
		cout <<"float function : "<< number << endl;
	}
};

int main()
{
	base b;
	b.display(10);
	b.display(10.0f);
	return 0;
}
