#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string str;
	cout <<"Enter string : ";
	getline(cin, str);

	stack<char> st;

	for(auto c : str){
		st.push(c);
	}
	string res;
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	cout <<"After : "<< res << endl;
	return 0;
}
