#include<iostream>
using namespace std;

class A
{
	int x,y;
 public :
	A(): x(0),y(0){ }
	A(int a,int b): x(a),y(b){ }
	
	void get_data()
	{
		cout <<"x : "<< x <<" y : "<< y << endl;
	}
	
	A operator + (A t)
	{
		return A(x+t.x,y+t.y);
		/*A temp;
		temp.x = x + t.x;
		temp.y = y + t.y;
		return temp;*/
	}
};

int main()
{
	A obj1(10,20),obj2(100,200),obj3;
	obj3 = obj1 + obj2;
	obj3.get_data();
}
