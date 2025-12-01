#include<iostream>
using namespace std;

class info
{
	int roll;
public :
	void set_data()
	{
		cout <<"Enter rollno : ";
		cin >> roll;
	}
	friend void display(const info &);
};

void display(const info &obj)
{
	cout <<"rollno : "<< obj.roll << endl;
}

int main()
{
	info i;
	i.set_data();
	display(i);
	
	return 0;
}
