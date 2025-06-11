#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *str;
public : 
	A(const char *p)
	{
		str = new char[strlen(p)+1];
		strcpy(str,p);
	}
	
	void get_data()
	{
		cout <<"str : "<< str << endl;
	}
	friend void rev_fun(A&);
};

void rev_fun(A &t)
{
	char *p,*q,a;
	p=q=t.str;

	while(*q)
		q++;
	q--;

	while(p<q)
	{
		a = *p;
		*p = *q;
		*q = a ;
		p++;
		q--;
	}
}

int main(int argc,char **argv)
{
	A obj(argv[1]);
	rev_fun(obj);
	obj.get_data();
	
}
