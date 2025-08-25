#include<iostream>
using namespace std;

class base1
{
 public :
	void display()
	{
		cout <<"display in base1"<< endl;
	}
};

class base2
{
 public :
	/*void display()
	{
		cout <<"display in base2"<< endl;
	}*/
};

class derived : virtual public base1, virtual public base2
{

};

int main()
{
	derived obj;
	obj.display();
		
	return 0;
}
