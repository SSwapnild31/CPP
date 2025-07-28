#include<iostream>
#include<fstream>
using namespace std;

class stud
{
 public :
	int id;
	char name[20];
	float marks;
	
	void set_data()
	{
		cout <<"enter is,name & marks"<< endl;
		cin >> id >> name >> marks;
	}
	void get_data()
	{
		cout <<"student data"<< endl;
		cout << id <<" "<< name <<" "<< marks << endl;
	}
};

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		cout <<"USAGE : ./a.out filename" << endl;
		return 0;
	}
	
	fstream fio(argv[1],ios::in | ios::out | ios::trunc);
	if(!fio)
	{
		cout <<"file not opened"<< endl;
		return 0;
	}	
	
	stud s,s1;
	
	s.set_data();
	
	fio.write((char*)&s,sizeof(s));
	
	fio.seekg(0,ios::beg);
	
	fio.clear();	
	fio.read((char*)&s1,sizeof(s1));
	
	s1.get_data();

	return 0;
}
