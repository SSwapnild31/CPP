#include<iostream>
using namespace std;

class info
{
	int roll;
	string name;
public :
	void set_data()
	{
		cout <<"Enter name : ";
		cin >> name;
		cout <<"Enter roll : ";
		cin >> roll;
	}
	friend void get_data(info );
};

void get_data(info obj)
{
	cout <<"name : "<< obj.name << endl;
	cout <<"roll : "<< obj.roll << endl;
}

int main()
{
	info i;
	i.set_data();
	get_data(i);

	return 0;
}
