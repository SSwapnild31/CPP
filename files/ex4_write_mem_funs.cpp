#include<iostream>
#include<fstream>
using namespace std;

class student
{
 public : 
	int rollno;
	char name[20];
	float marks;
	student()
	{
		cout <<"enter rollno,name & marks" << endl;
		cin >> rollno >> name >> marks;
	}
};

int main()
{
	student s1;
	
	ofstream fout("data1");
	
	if(fout.fail())
	{
		cout <<"file not found..!"<< endl;
		return 0;
	}
	
	fout.write((char*)&s1.rollno,sizeof(s1.rollno));
	
	fout.close();

	return 0;
}
