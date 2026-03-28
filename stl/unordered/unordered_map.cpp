#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<string, int> mp;
	
	mp["hyd "] = 79;
	mp["blr "] = 75;
	mp["pune"] = 85;
	mp["mum "] = 92;
	
	for(auto &i : mp){
		cout << i.first <<" -> "<< i.second << endl;
	}

	return 0;
}
