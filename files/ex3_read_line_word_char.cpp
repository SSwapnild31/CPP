//read line by line, word by word, char by char.

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		cout <<"USAGE : ./a.out filename"<< endl;
		return 0;
	}
	
	ifstream fin(argv[1]);		//read mode
	
	if(fin.fail())
	{
		cout <<"file not present..!"<< endl;
		return 0;
	}
	cout <<"------char by char------"<< endl;
	char ch;
	while((ch=fin.get())!=-1)
		cout << ch ;
	cout << endl;
	
	fin.clear();
	fin.seekg(0,ios::beg);
		
	cout <<"------word by word------"<< endl;
	
	string s;
	while(fin >> s)
		cout << s <<" ";
	cout << endl;
	
	fin.clear();
	fin.seekg(0,ios::beg);
	cout <<"------line by line------"<< endl;
	
	string s1;
	while(getline(fin,s1))
		cout << s1 << endl;
	
	return 0;
}
