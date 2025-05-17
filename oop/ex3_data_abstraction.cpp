#include<iostream>
using namespace std;

struct family
{
private :
	int cash,gold;
	void setData();
public :
	void getData();
};

int main()
{
	family f;
	f.getData();
}

void family::setData()
{
	cout <<"Enter cash & gold"<<endl;
	cin >> cash >> gold;
}

void family::getData()
{
	setData();
	cout <<"cash : "<< cash <<" gold : "<< gold << endl;
}
