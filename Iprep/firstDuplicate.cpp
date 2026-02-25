#include<iostream>
#define MAX 50
using namespace std;

int main()
{
	char str[MAX];
	cout <<"Enter string : ";
	cin.getline(str, MAX);

	char freq[256] = {0};

	for(int i=0; str[i]; i++){
		if(++freq[(unsigned char)str[i]] == 2){
			cout <<"first duplicate : "<< str[i] << endl;
			return 0;
		}
	}
	cout <<"not found!"<< endl;
	
	return 0;
}
