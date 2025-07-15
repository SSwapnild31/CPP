//user defined strstr() function


#include<iostream>
using namespace std;

char* my_strstr(char *m,char *s)
{
	int i,j;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
				return &m[i];
		}
	}
	return 0;
}

int main()
{
	char ms[20],ss[20];
	cout <<"Enter main string : ";
	cin >> ms;
	cout <<"Enter sub string : ";
	cin >> ss;
	
	my_strstr(ms,ss) ? cout <<"Yes"<< endl : cout <<"No"<< endl;
}
