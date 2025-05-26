#include<iostream>
using namespace std;

class family
{
	const int cash,gold;
public : 
	family():cash(10),gold(20)
	{
		cout <<"default constructor"<< endl;
		//cin >> cash >> gold;
	}
	family(int a,int b):cash(a),gold(b)
	{
		cout <<"parameterized constructor"<< endl;
		//cash=a,gold=b;
	}
	family(family &t):cash(t.cash),gold(t.gold)
	{
		cout<<"copy constructor"<< endl;
		//cash=t.cash,gold=t.gold;
	}
	void get_data()
	{
		cout << cash <<" "<< gold << endl;
	}
	~family()
	{
		cout <<"destructor"<< endl;
	}
};

family test(family temp)
{
	cout <<"in test fun"<< endl;
	return temp;
}
int main()
{
	family f1,f2(100,200),f3(f1);
	f1.get_data();
	f2.get_data();
	f3.get_data();
	test(f1);
}
