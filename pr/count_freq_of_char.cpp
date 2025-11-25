#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char,int> m;
	string s;
	cout <<"Enter string : ";
	cin >> s;
	
	for(auto i : s)
		m[i]++;

	for(auto i : m)
		cout <<i.first <<"->"<<i.second << endl;

	return 0;
}
