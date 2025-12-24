#include<iostream>
using namespace std;

class info
{
	int x;
public:
	info() {  }
	info(int a){
		x = a;
	}
	info operator + (info &obj){
		return this->x + obj.x;
	}
	int show(){
		return x;
	}
};

int main()
{
	info f1(10),f2(20),f3;
	f3 = f1 + f2 ;

	cout << f3.show() << endl;

	return 0;
}
