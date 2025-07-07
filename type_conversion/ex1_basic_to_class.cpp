#include<iostream>
using namespace std;

class Time
{
int hr,min;
 public :
	Time():hr(0),min(0){   }
	Time(int a)
	{
		cout <<"conversion"<< endl;
		hr  = a / 60;
		min = a % 60;
	}
	void get_time()
	{
		cout << hr <<" hours "<< min <<" min "<< endl;
	}
};

int main()
{
	Time t;
	t.get_time();
	int n;
	cout <<"Enter total minutes : ";
	cin >> n;
	t = n;
	t.get_time();
	return 0;
}
