#include<iostream>
using namespace std;


class A
{
 int x;
 public :
	void set_data()
	{
		cout <<"Enter x : ";
		cin >> x;
	}
	void get_data()
	{
		cout <<"x : "<< x << endl;
	}
};
class B : virtual public A
{

};
class C : virtual public A
{

};
class D : public B, public C
{
 
};

int main()
{
	D obj;
	obj.set_data();
	obj.get_data();
	
	return 0;
}
