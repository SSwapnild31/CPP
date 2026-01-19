#include<iostream>
using namespace std;

class singleton
{
private:
	static singleton *ptr;

	singleton(){
		cout <<"Constructor"<< endl;
	}
	~singleton(){
		cout <<"Destructor"<< endl;
	}
public:
	static singleton *create_object(){
		if(ptr == nullptr){
			ptr = new singleton();
		}
		return ptr;
	}
	
	static void delete_object(){
		if(ptr != nullptr){
			delete ptr;
		}
		ptr = nullptr;
	}
};

singleton* singleton::ptr;

int main()
{
	singleton *obj1, *obj2;
	obj1 = singleton::create_object();
	obj2 = singleton::create_object();
	
	singleton::delete_object();

	return 0;
}
