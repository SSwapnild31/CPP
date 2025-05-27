#include<iostream>
#include<cstring>

using namespace std;

class deep
{
	char *s;
public : 
	deep(const char *p)
	{
		s=new char[strlen(p)+1];
		strcpy(s,p);
	}
	deep(deep &obj)
	{
		s=new char[strlen(obj.s)+1];
		strcpy(s,obj.s);
	}
	void get_data()
	{
		cout << s << endl;
	}
	void modify()
	{
		s[0]='S';
	}
	~deep()
	{
		delete []s;
	}
};

int main()
{
	deep d1("vector"),d2(d1);
	d1.get_data();
	d2.get_data();
	d1.modify();
	d1.get_data();
	d2.get_data();
	return 0;
}
