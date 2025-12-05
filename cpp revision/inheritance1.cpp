#include<iostream>
using namespace std;

class base
{
public :
	void display()
	{
		cout <<"base class"<< endl;
	}
};
class derived : public base
{

};



int main()
{
	derived d;
	d.display();
	return 0;
}
