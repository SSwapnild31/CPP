#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *str;
public : 
	A(char *p)
	{
		str = new char[strlen(p)+1];
		strcpy(str,p);
	}
	friend void freq_fun(A&);
};

void freq_fun(A &t)
{
	int c = 0,flag;
	char *p=t.str;
	for(int i=0;p[i];i++)
	{
		flag = 0;
		for(int j=0;j<i;j++)
			if(p[i]==p[j])
				flag=1;
		if(flag)
			continue;
		c = 1;
		for(int k=i+1;p[k];k++)
		{
			if(p[i]==p[k])
				c++;
		}
		cout << p[i] << "->"<< c << endl;
	}
}

int main(int argc,char **argv)
{
	A obj(argv[1]);
	freq_fun(obj);
	return 0;
}
