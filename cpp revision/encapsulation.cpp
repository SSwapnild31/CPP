#include<iostream>
using namespace std;

class A
{
	string name;
	string dept;
public :
	void setData(string n, string d)
	{
		name = n;
		dept = d;
	}
	void getData()
	{
		cout <<"name : "<< name << endl;
		cout <<"dept : "<< dept << endl;
	}
};

int main()
{
	A obj;
	obj.setData("Swapnil","Computer");
	obj.getData();
	
	return 0;
}
