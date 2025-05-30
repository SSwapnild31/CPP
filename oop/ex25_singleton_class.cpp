#include<iostream>
using namespace std;

class Singleton
{
	static Singleton *s;
	
	Singleton()
	{
		cout <<"constructor"<<endl ;
	}
	~Singleton()
	{
		cout <<"destructor"<< endl;
	}

public :
	static Singleton* create_obj()
	{
		if(s==nullptr)
		{	
			s=new Singleton;
			cout <<"object created"<< endl;
		}
		return s;
	}
	
	static void delete_obj()
	{
		if(s!=nullptr)
		{
			delete s;
			cout <<"object destroyed"<< endl;
		}
		s=nullptr;
	}
};
Singleton* Singleton::s;

int main()
{
	Singleton *p1,*p2;
	
	p1=Singleton::create_obj();
	p2=Singleton::create_obj();

	Singleton::delete_obj();
	
	return 0;
}
