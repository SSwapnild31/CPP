#include<iostream>
using namespace std;

class rbi
{
protected :
	double salary;
public :
	virtual void display() = 0;
	
};
class axis : public rbi
{
public :
	axis(){
		salary = 25000;
	}
	void display()
	{
		cout << salary << endl;
	}	
};

int main()
{
	//rbi r;	
	axis a;
	a.display();
	return 0;
}
