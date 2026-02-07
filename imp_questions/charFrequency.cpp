#include<iostream>
using namespace std;

class solution
{
public :
	void charFreq(const string &s){
		int freq[256] = {0};

		for(int i=0; i < s.size(); i++){
			if(s[i] != ' '){
				freq[(unsigned int)s[i]]++;
			}
		}
		
		for(int i=0; i < s.size(); i++){
			if(s[i] != ' ' && freq[(unsigned int)s[i]] != 0){
				cout << s[i] <<" -> " << freq[(unsigned int)s[i]]++ << endl;
				freq[(unsigned int)s[i]] = 0;
			}
		}
	}
};

int main()
{
	string p;
	cout <<"Enter string : ";
	cin >> p;
	
	solution s;
	s.charFreq(p);

	return 0;
}
