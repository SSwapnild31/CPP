#include<iostream>
using namespace std;

class Handbook
{
	string name,mbl;
	
public :
	static int c; 
	Handbook()
	{
		//cout <<"Enter name and mobile "<< endl;
		//cin >> name >> mbl;
		c++;
		cout <<"Acc created.."<< endl;
	}
	~Handbook()
	{
		cout <<"Acc deleted..!"<< endl;
		c--;
	}
};

int Handbook::c;

int main()
{
	Handbook h1,h2;
	{
		Handbook h3,h4;
		cout <<"Total object : "<< h3.c << endl;
	}
	Handbook h5;
	cout <<"Total object : "<< Handbook::c << endl;
	
	return 0;
}
