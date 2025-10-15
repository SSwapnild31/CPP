#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char data[100];
	
	ofstream outfile;
	outfile.open("INFO.dat");
	
	cout<<"\nWriting to the file..."<<endl;
	cout<<"Enter your name : ";
	cin.getline(data,100);
	
	outfile<<data<<endl;
	
	cout<<"Enter your age : ";
	cin>>data;
	//cin.ignore();
	
	outfile<<data<<endl;
	
	outfile.close();
	
	ifstream infile;
	infile.open("INFO.dat");
	
	cout<<"\nReading from the file..."<<endl;
	infile>>data;
	
	cout<<"name : "<<data<<endl;
	
	infile>>data;
	cout<<"Age  : "<<data<<endl;
	
	infile.close();
	return 0;
}
