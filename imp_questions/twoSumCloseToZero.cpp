#include<iostream>
#include<vector>
using namespace std;

class Data
{
public:
	int twoSum(vector<int> &nums, int n){
	
		return 0;
	}
};

int main()
{
	int n;
	vector<int> v;
	
	cout <<"Enter n : ";
	cin >> n;
	
	cout <<"Enter arr ele"<< endl;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	/*for(int &i : v){
		cout << i <<" ";
	}
	cout << endl;*/

	return 0;
}
