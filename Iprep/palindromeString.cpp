#include<iostream>
using namespace std;

int main()
{
	string str;
	cout <<"Enter string : ";
	getline(cin, str);

	int i = 0;
	int j = str.size() - 1;
	while(i < j){
		if(str[i] != str[j]){
			cout <<"Not palindrome"<< endl;
			return 0;
		}
		i++;
		j--;
	}
	cout <<"Palindrome string"<< endl;
	return 0;
}
