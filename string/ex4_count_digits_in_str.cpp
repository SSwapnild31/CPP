#include<iostream>
using namespace std;

class A
{
	char *s;
public :
	A(){
		s = new char[100];
	}
	void set_data()
	{
		cout <<"Enter string : " ;
		cin.getline(s,100);
	}
	~A(){
		delete []s;
	}
	friend int count_digit(A&);
};

int count_digit(A &t)
{
	char *p=t.s;
	int c = 0;
	while(*p)
	{
		if(*p>='0' && *p<='9')
			c++;
		p++;	
	}
	return c;
}

int main()
{
	A obj;
	obj.set_data();
	int c = count_digit(obj);
	cout <<"digit count : "<< c << endl;
}
