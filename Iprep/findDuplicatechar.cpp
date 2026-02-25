#include<iostream>
#define MAX 50

using namespace std;

int main()
{
	char str[MAX];
	cout <<"Enter string : ";
	cin.getline(str, MAX);
	
	int dup[256] = {0};

	for(int i=0; str[i]; i++){
		if(str[i] == ' ') continue;
		dup[(unsigned char)str[i]]++;
	}
	
	for(int i=0; str[i]; i++){
		if(dup[(unsigned char)str[i]] > 1){
			cout << str[i] <<" -> "<< dup[(unsigned char)str[i]] << endl;
			dup[(unsigned char)str[i]] = 0;
		}
	}
	
	return 0;
}
