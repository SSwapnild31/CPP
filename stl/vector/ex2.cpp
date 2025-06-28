#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1={10,20,30,40,50};
	//v1.pop_back();	//delete last ele
	//v1.pop_back();	//delete last ele
	
	//cout << v1.size() << endl;		//no of ele's
	//cout << v1.max_size() << endl;		//print max no of ele's that vector can store
	
	
	
	for(int i : v1)
		cout << i <<" ";
	cout << endl;
}
