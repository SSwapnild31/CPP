#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
	//map<string, int> ump;
	unordered_map<string, int> ump;
	
	ump["blr "] = 75;
	ump["pune"] = 95;
	ump["mum "] = 92;
	
	for(auto &i : ump){
		cout << i.first <<" -> "<< i.second << endl;
	}

	return 0;
}
