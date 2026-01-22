#include<iostream>
#include<cstring>
using namespace std;

class Data
{
public:
	void str(char *p){
		
		int len = strlen(p);

		for(int i=0,j=len-1;i<j;i++,j--){
		       char t = p[i];
			p[i] = p[j];
			p[j] = t;
		}
	}

};

int main()
{
	Data d;
	char s[50];
	cout <<"Enter string : ";
	cin.getline(s, 50);
	
	cout <<"Before reverse : "<< s << endl;

	d.str(s);
	
	cout <<"After After : "<< s << endl;
	
	return 0;
}
