#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, string> m1;
	m1.insert(pair<int,string>(1,"swapnil"));
	m1.insert(pair<int,string>(2,"dipak"));
	m1.insert(pair<int,string>(3,"chakri"));
	m1.insert(pair<int,string>(4,"anil"));
	m1.insert(pair<int,string>(1,"param"));
	
	for(auto i : m1)
		cout << i.first <<" --> "<< i.second << endl;
	
	return 0;
}
