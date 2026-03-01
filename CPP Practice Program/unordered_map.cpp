#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<string, int> ump;
	
	ump["blr "] = 75;
	ump["pune"] = 85;
	ump["mum "] = 92;
	
	for(auto &i : ump){
		cout << i.first <<" -> "<< i.second << endl;
	}

	return 0;
}
