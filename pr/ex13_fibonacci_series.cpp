#include<iostream>
using namespace std;

class Fib
{
 int n;
 public :
	Fib()
	{ 
		cout <<"enter n : ";
		cin >> n;
	}
	
	void fibona()
	{
		int first = 0, second = 1, result = 0 ;
		
		for(int i=0;i<n;i++)
		{
			cout << first <<" ";
			result = first + second;
			first = second;
			second = result;
		}
		cout << endl;
	}
};

int main()
{
	Fib obj;
	obj.fibona();
	
	return 0;
}
