#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec(3,10);
	
	for(int val : vec) 
		cout << val <<" ";
	cout << endl;

	cout << *(vec.end()) << endl;
	
	return 0;
}
