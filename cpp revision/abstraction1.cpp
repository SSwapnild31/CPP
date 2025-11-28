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

class sbi : public rbi
{


};

int main()
{
	//rbi r;	
	sbi s;
	axis a;
	a.display();
	return 0;
}
