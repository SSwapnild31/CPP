#include<iostream>
#include<fstream>
using namespace std;

class student
{
 public : 
	int rollno;
	char name[20];
	float marks;
	student(){ }
	
	void display()
	{
		cout << rollno <<" "<< name <<" "<< marks << endl;
	}
};

int main()
{
	student s1;
	
	ifstream fin("data1");
	
	if(fin.fail())
	{
		cout <<"file not found..!"<< endl;
		return 0;
	}
	
	fin.read((char*)&s1.rollno,sizeof(s1.rollno));
	fin.read((char*)&s1.name,sizeof(s1.name));
	fin.read((char*)&s1.marks,sizeof(s1.marks));
	
	s1.display();
	
	fin.close();

	return 0;
}
