#include<iostream>
using namespace std;

class A
{
	char *p,*s;
public : 
	A(){
		p = new char[100];
		s = new char[20];
	}
	void set_data()
	{
		cout <<"Enter string : "<< p ;
		cin.getline(p,100);
		cout <<"Enter substr : "<< s ;
		
		cin.getline(s,20);
	}
	void get_data()
	{
		cout <<"string : "<< p << endl;
	}
	
	int print_binary(int c) 
	{
		int cnt = 0;
		for(int pos=31;pos>=0;pos--)
		{
			cout << (c>>pos&1);
			if(c>>pos&1)
				cnt++;
		}
		cout << endl;
		return cnt;
	}
	~A(){
		delete []p;
		delete []s;
	}
	
	friend int substr(A&);
};

void strrev(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}

int substr(A &t)
{
	int i=0,j=0,c=0;
	for(i=0;t.p[i];i++)
	{
		if(t.p[i]==t.s[0])
		{
			for(j=1;t.s[j];j++)
			{
				if(t.p[i+j]!=t.s[j])
					break;
			}
			if(t.s[j]=='\0')
			{
				c++;
				strrev(&t.p[i],&t.p[i+j-1]);
				i = i + (j-1);
			}
		}
	}
	return c;
}

int main()
{
	A obj;
	obj.set_data();
	int c = substr(obj);
	cout <<"count of sub str : "<< c << endl;
	obj.get_data();
	int setcnt = obj.print_binary(c);
	cout <<"set bit count : "<< setcnt << endl;
	return 0;
}
