#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	for(int i=0;i<v1.size();i++)
		cout << v1[i] <<" ";
	cout << endl;
	
	return 0;
}
