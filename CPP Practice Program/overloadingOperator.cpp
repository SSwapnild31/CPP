#include<iostream>
using namespace std;

class Data
{
	int *ptr;
 public:
 	Data(){
		ptr = new int(0);
	}

	Data(int x){
		ptr = new int(x);
	}

	Data(const Data &obj){
		ptr = new int(*obj.ptr);
	}

	Data& operator = (const Data &obj){
		if(this != &obj){		
			delete ptr;
			ptr = new int(*obj.ptr);
		}
		return *this;
	}

	Data operator + (const Data &obj){
		Data temp(*ptr + *obj.ptr);
		return temp;
	}
	
	~Data(){
		delete ptr;
	}

	void show(){
		cout << *ptr << endl;
	}
};

int main()
{
	Data d1(10), d2(d1);
	Data d3 = d1 + d2;
	
	d3.show();
	return 0;
}
