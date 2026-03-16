#include<iostream>
using namespace std;

int maxUniqueLen(string s){

	if(s.size() <= 0) return 0;
	
	int max = 0;
	for(int i=0; i<s.size(); i++){
		for(int j=i+1; j<s.size(); j++){
			
			int freq[256] = {0};
			int sub_max = 0;
			if(s[i] == s[j]){
				for(int k=i+1; k<j; k++){
					if(freq[s[k]] == 0){
						freq[s[k]]++;
						sub_max++;
					}
				}
			}
			if(sub_max > max)	
				max = sub_max;
		}
	}
	return max;
}

int main()
{
	string str;
	cout <<"I/P : ";
	getline(cin, str);
	
	cout <<"O/P : "<< maxUniqueLen(str) << endl;
	
	return 0;
}
