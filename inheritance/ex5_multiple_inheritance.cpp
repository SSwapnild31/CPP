#include<iostream>
using namespace std;

class base1
{
 public :
	base1(){
		cout <<"base1 class"<< endl;
	}

};
class base2
{
 public :
	base2(){
		cout <<"base2 class"<< endl;
	}

};
class derived:public base1, public base2
{
 public :
	derived(){
		cout <<"derived class"<< endl;
	}
	derived(int a){
		cout <<"derived class default const"<< endl;
	}

};

int main()
{
	derived d(10);
	return 0;
}
