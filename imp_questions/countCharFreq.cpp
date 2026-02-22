#include<iostream>
#define MAX 50
using namespace std;

int main()
{
	char s[MAX];
	cout <<"Enter string : ";
	cin.getline(s, MAX);
	
	int freq[256] = {0};
	for(int i=0; s[i]; i++){
		freq[(unsigned int)s[i]]++;
	}

	for(int i=0; s[i] !='\0'; i++){
		
		if(freq[(unsigned int)s[i]] == 1){
			cout << s[i] <<" - "<< freq[(unsigned int)s[i]] <<"time\n";
			freq[(unsigned int)s[i]] = 0;
		}
		else if(freq[(unsigned int)s[i]] > 1){
			cout << s[i] <<" - "<< freq[(unsigned int)s[i]] <<"times\n";
			freq[(unsigned int)s[i]] = 0;
		}
	}
	
	return 0;
}
