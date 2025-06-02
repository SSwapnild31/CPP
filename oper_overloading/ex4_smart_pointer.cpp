#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
public :
	person()
	{
		cout <<"Enter name & age"<< endl;
		cin >> name >> age;
	}
	~person()
	{
		cout <<"person destructor"<< endl;
	}
	void get_person()
	{
		cout << name <<" "<< age << endl;
	}
};

class Smartptr
{
	person *ptr;
public :
	Smartptr()
	{
		cout <<"smartptr constructor"<< endl;
		ptr = new person;	//dynamic object
	}
	~Smartptr()
	{
		cout <<"smartptr destructor"<< endl;
		delete ptr;
	}
	person* operator ->()
	{
		return ptr;
	}
	person operator *()
	{
		return *ptr;
	}
};

int main()
{
	Smartptr s1,s2;
	s1->get_person();
	(*s2).get_person();
	
	return 0;
}
