#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	fstream new_file;
	new_file.open("new_file_write.txt",ios::out);
	if(!new_file)
	{
		cout<<"File creation failed";
	}
	else
	{
		cout<<"New file created.";
		cout<<"\nWriting to the file...";
		new_file<<"Learning file handling";
	}
	new_file.close();
	cout<<"\nReading from the file...\n";
	new_file.open("new_file_write.txt",ios::in);
	if(!new_file)
	{
		cout<<"No such file";
	}
	else
	{
		char ch;
		while(!new_file.eof())
		{
			new_file>>ch;
			cout<<ch;
		}
	}
	
	new_file.close();
	return 0;
}
