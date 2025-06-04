#include<iostream>
using namespace std;

class A
{
	char *s;
public :
	A()
	{
		s = new char[100];
	}	
	void set_data()
	{
		cout <<"Enter string : ";
		cin.getline(s,100);
	}
	void get_data()
	{
		cout <<"string : "<< s << endl;
	}
	~A()
	{
		delete []s;
	}
	friend void remove_dupli(A&);
};

void remove_dupli(A& t)
{
	for(int i=0;t.s[i];i++)
	{
		for(int j=i+1;t.s[j];j++)
		{
			if(t.s[i]==t.s[j])
			{
				for(int k=j;t.s[k];k++)
					t.s[k]=t.s[k+1];
				j--;
			}
		}
	}
}

int main()
{
	A obj;	
	obj.set_data();
	remove_dupli(obj);
	obj.get_data();
}
