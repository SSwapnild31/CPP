#include<iostream>
using namespace std;

class A
{
	char *s;
public : 
	A()
	{
		s=new char[100];
	}
	
	void set_data()
	{
		cout <<"Enter string : ";
		cin.getline(s,100);
	}
	~A()
	{
		delete []s;
	}
	
	int print_binary(int count)
	{
		int c=0;
		for(int pos=31;pos>=0;pos--)
		{
			cout << (count>>pos&1);
			if(count>>pos&1)
				c++;
		}
		cout << endl;
		return c;
	}
	friend int check_pal(A&);
};

char * str_chr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}

int pal_help(const char *p,const char *q)
{
	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}

int check_pal(A &t)
{
	int c = 0;
	char *q, *p=t.s;

	while(q=str_chr(p,' '))
	{
		if(pal_help(p,q-1))
			c++;
		p=q+1;
	}
	q=p;
	while(*q)
		q++;
	q--;
	
	if(pal_help(p,q))
		c++;
	return c;
}


int main()
{
	int count = 0;
	A obj;
	obj.set_data();
	count = check_pal(obj);
	cout <<"palindrome count : "<< count << endl;
	
	int c = obj.print_binary(count);
	cout <<"set bits of count : "<< c << endl;
}
