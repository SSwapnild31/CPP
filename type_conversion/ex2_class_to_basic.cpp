#include<iostream>
using namespace std;

class Time
{
 int hr,min;
 public :
	 Time()
	 {
	 	cout <<"Enter hr & min"<< endl;
		cin >> hr >> min;
	 }
	 operator int ()
	 {
	 	cout <<"conversion"<< endl;
		return hr*60+min;
	 }
};

int main()
{
	Time t;
	int n;
	n = t;
	cout <<"Total minutes : "<< n << endl;

}
