#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	unordered_set<string> us;
	
	us.insert("Swapnil");
	us.insert("Swapnil");
	us.insert("Balaji");
	us.insert("Dipak");

	for(auto &name : us){
		cout << name << endl;
	}
	return 0;
}
