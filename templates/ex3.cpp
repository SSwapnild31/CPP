#include<iostream>
using namespace std;


template<class type> 
class A
{
	type *s;
 public : 
	A(){
		s = new type[6];
	}
	void set_data()
	{
		type *p=s;
		cout <<"enter "<< typeid(s).name() <<" data"<< endl;;
		for(int i=0;i<5;i++)
			cin >> *p++;
	}
	void get_data()
	{
		type *q=s;
		for(int i=0;i<5;i++)
			cout << *q++ << endl;
	}
};

int main()
{
	A <int>a;
	a.set_data();
	a.get_data();
	
	A <char>b;
	b.set_data();
	b.get_data();	
	return 0;
}
