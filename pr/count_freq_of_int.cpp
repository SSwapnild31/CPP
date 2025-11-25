#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int,int> m;
	int a[6];

	cout <<"Enter arr ele's"<< endl;
	for(int i=0;i<6;i++)
		cin >> a[i];
	
	for(auto i : a)
		m[i]++;

	for(auto i : m)
		cout << i.first <<" -> "<< i.second << endl;
	return 0;
}
