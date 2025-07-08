#include<iostream>
#include<fstream>
#include<cstring>
#define size 100

using namespace std;

class Student
{
 public :
 	int *roll_no;
 	char *name;
 	float *marks;

	Student()
	{
		roll_no = new int;
		marks = new float;
	}

	void set_data(int id,char *p,float m)
	{
		*roll_no = id;
		*marks = m;
		name = new char[strlen(p)+1];
		strcpy(name,p);
	}
	void get_data()
	{
		cout << *roll_no <<" "<< name <<" "<< *marks << endl;
	}
	
	~Student()
	{
		delete roll_no;
		delete marks;
		delete []name;
		
		roll_no = 0;
		name = 0;
		marks = 0;
	}

	template<class type>
	bool check_arm(type id)
	{
		int p,c,r,arm,sum=0;
		for(p=id,c=0;p;p=p/10,c++);
		for(p=id;p;p=p/10)
		{
			r = p % 10;
			arm = 1;
			for(int j=0;j<c;j++)
				arm = arm * r;

			sum = sum + arm ;
		}
		if(sum==id)
			return 1;
		return 0;
	}
	friend bool check_pal(char*);
};

bool check_pal(char *p)
{
	char *q=p;
	while(*q)
		q++;
	q--;
	
	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	
	return 1;
}

int main()
{
	Student s[3];

	ifstream fin("data1");

	if(fin.fail())
	{
		cout <<"File not opened..!"<< endl;
		return 0;
	}
	
	int i;
	for(i=0;i<3;i++)
	{
		int id;char name[20];float marks;
		fin >> id >> name >> marks;
		s[i].set_data(id,name,marks);
	}
	
	for(i=0;i<3;i++)
	{
		if(((check_pal(s[i].name))) && (s[i].check_arm(*(s[i].roll_no))))
			s[i].get_data();
	}
	
	fin.close();
	
	return 0;
}
