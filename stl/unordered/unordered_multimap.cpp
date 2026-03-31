#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_multimap<string, int> umm;
	
	umm.insert({"Swapnil", 1});
	umm.insert({"Swapnil", 2});
	umm.insert({"Dipak  ", 3});
	umm.insert({"Balaji ", 1});
	umm.insert({"Chakri ", 4});
	
	for(auto &val : umm){
		cout << val.first <<" -> "<< val.second << endl;
	}
	return 0;
}
