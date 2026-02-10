#include<iostream>
#include<cstring>
using namespace std;

void strReverse(char *p, char *q){
	while(p<q){
		char t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
}

int main()
{
	char s[50];
	cout <<"Enter string : ";
	cin.getline(s, sizeof(s));

	strReverse(s, s+strlen(s)-1);
	int i = 0, j = 0;

	while(s[j] != 0){
		if(s[j] == ' '){
			strReverse(&s[i], &s[j-1]);
			i = j + 1;
		}
		else if(s[j+1] == '\0'){
			strReverse(&s[i], &s[j]);
		}
		j++;
	}

	cout << s << endl;
	return 0;
}
