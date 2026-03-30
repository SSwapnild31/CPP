#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	unordered_multiset<string> ums;
	
	ums.insert("Swapnil");
	ums.insert("Balaji");
	ums.insert("Dipak");
	ums.insert("Balaji");
	ums.insert("Swapnil");
	
	for(auto &names : ums){
		cout << names << endl;
	}

	return 0;
}
