#include<iostream>
#include<cstring>

using namespace std;

class shallow
{
	char *s;
public : 
	shallow(const char *p)
	{
		s = new char[strlen(p)+1];
		strcpy(s,p);
	}
	void get_data()
	{
		cout << s << endl;
	}
	void modify()
	{
	s[0]='S';
	}
	~shallow()
	{
		delete []s;
	}
};

int main()
{
	shallow s1("vector"),s2(s1);
	s1.get_data();
	s2.get_data();
	s1.modify();
	s1.get_data();
	s2.get_data();
	
	return 0;
}
