#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<cstdlib>
using namespace std;

class Data
{
public:
	int twoSum(vector<int> &nums){
		
		if(nums.size() < 2){
			cout <<"Not enough elements"<< endl;
			return 0;
		}
		sort(nums.begin(), nums.end());
		
		int left = 0;
		int right = nums.size() - 1;
		int minSum = INT_MAX;
		
		while(left < right){
			int currentSum = nums[left] + nums[right];
			
			if(abs(currentSum) < abs(minSum)){
				minSum = currentSum; 
			}

			if(currentSum < 0){
				left++;
			}else{
				right--;
			}
		}
		
		return minSum;
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
	Data d;
	cout <<"sum closest to zero : "<< d.twoSum(v) << endl;

	/*for(int &i : v){
		cout << i <<" ";
	}
	cout << endl;*/

	return 0;
}
