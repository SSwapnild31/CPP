#include<iostream>
#include<cstring>
#define size 100
using namespace std;

class my_string
{
	char *mystring;
public :
	my_string()
	{
		mystring = new char[size];
	}

	my_string(const char *ptr)
	{
		int len = strlen(ptr),i;
	
		mystring = new char[len+1];

		for(i=0;i<len;i++)
			mystring[i]=ptr[i];
		mystring[i]='\0';

		/*mystring = new char[strlen(ptr)+1];
		strcpy(mystring,ptr);*/
	}
	
	void operator = ()
	{
		
	}
	
	~my_string()
	{
		delete []mystring;
	}
};

int main()
{
	my_string str;
	
	str = "swapnil";
		
	return 0;
}
