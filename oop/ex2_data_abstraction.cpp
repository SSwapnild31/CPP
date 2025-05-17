#include<iostream>
using namespace std;

struct family
{
private : 
	 int gold,cash;

public :
	void setData()
	{
		cout <<"Enter cash & gold "<<endl;
		cin >> gold >> cash;
	}
	void getData()
	{
		cout <<"gold : "<< gold <<" cash : "<< cash <<endl;
	}
};

int main()
{
	family f;
	f.setData();
	f.getData();
}
