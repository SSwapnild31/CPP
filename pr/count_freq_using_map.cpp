#include<iostream>
#include<map>
using namespace std;

int main()
{
	int a[]={10,20,30,10,30,20,30};
	map<int,int> m;
	
	for(auto i : a)
		m[i]++;

	for(auto i : m)
		cout << i.first <<"->"<< i.second << endl;
	
	return 0;
}
