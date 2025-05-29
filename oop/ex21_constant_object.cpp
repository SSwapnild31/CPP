#include<iostream>
using namespace std;

class family
{
	int cash;
	mutable int gold;
public : 
	family()
	{
		cout <<"Enter cash & gold"<< endl;
		cin >> cash >> gold ;
	}
	void get_data()const
	{
		//cash = 100;
		gold = 200;
		cout << cash <<" "<< gold << endl;
	}
};

int main()
{
	const family f;
	f.get_data();
	return 0;	
}
