#include<iostream>
#include<cstring>
using namespace std;

class value
{
	public :
		void display(char* buffer)
		{
			cout<<"Copy key    : " << buffer;
		}
};

int main()
{
	char key[25],buffer[25];
	cout<<"Enter your string : ";
	cin.getline(key,25);
	strcpy(buffer,key);
	cout<<"Entered key : " << key << endl;
	value v;
	v.display(buffer);

	return 0;
}
