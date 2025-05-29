#include<iostream>
using namespace std;

class family
{
	int cash,gold;
public :
	void set_data()
	{
		cout <<"Enter cash & gold"<< endl;
		cin >> cash >> gold;
	}
	void get_data()const
	{
		//cash = 100, gold=200;		   //error, 'cause of const method
		cout << cash <<" "<< gold << endl;
	} 
};

int main()
{
	family f;
	f.set_data();
	f.get_data();
	return 0;
}
