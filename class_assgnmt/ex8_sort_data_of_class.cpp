#include<iostream>
using namespace std;

class student
{
	int rollno;
	char name[20];
	float marks;
public :
	void set_data()
	{
		cout <<"enter rollno : ";
		cin >> rollno;
		cout <<"enter name : ";
		cin >> name;
		cout <<"enter marks : ";
		cin >> marks;
	}
	void get_data()
	{
		cout << name <<" "<< rollno <<" "<< marks << endl;
	}
	void sort_data(student *s,int n);
};

void student::sort_data(student *s,int n)
{
	student s1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			if(s[i].rollno>s[j].rollno)
			{
				s1=s[i];	
				s[i]=s[j];
				s[j]=s1;
			}
		}
	}
}

int main()
{
	int n;
	cout <<"Enter student count : ";
	cin >> n;

	student *s=new student[n];
	for(int i=0;i<n;i++)
		s[i].set_data();
	
	s->sort_data(s,n);
	cout << "after sort" << endl;
	for(int i=0;i<n;i++)
		s[i].get_data();	
	
	
}
