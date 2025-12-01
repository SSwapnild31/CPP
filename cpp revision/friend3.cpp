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
	void get_data()
	{
		cout <<"name : "<< name << endl;
		cout <<"roll : "<< roll << endl;	
	}
	friend void modify_data(info *);
	friend void modify_data1(info &);
};

void modify_data2(const info &obj)
{
	//obj.name = "Dipak";			//error
	//obj.roll = 76;			//error
	cout <<"In data2"<< endl;
	//obj.get_data();			//error
	//obj.get_data();			//error
}

void modify_data1(info &obj)
{
	obj.name = "Dipak";
	obj.roll = 76;
}

void modify_data(info *ptr)
{
	ptr->name = "dipak";
	ptr->roll = 75;
}

int main()
{
	info i;

	i.set_data();
	i.get_data();
	
	//modify_data(&i);
	//modify_data1(i);
	modify_data2(i);		

	i.get_data();
	

	return 0;
}
