#include<iostream>
using namespace std;

class Data
{
public:
	bool substr(string &m, string &s){
		
		for(int i=0; i<m.size();i++){
			if(m[0] == s[0]){
				int j;
				for(j=1;j<s.size();j++){
					if(m[i+j]!=s[j]){
						break;
					}
				}
				if(s[j]=='\0'){
					return true;
				}
			}
		}
		return false;
	}
	
	
};

int main()
{
	Data d;
	string s,m;
	cout <<"Enter main string : ";
	getline(cin,m);
	cout <<"Enter substring : ";
	getline(cin,s);
	
	if(d.substr(m,s)){
		cout <<"Substring is present"<< endl;
	}else{
		cout <<"Substring is not present"<< endl;	
	}

	return 0;
}
