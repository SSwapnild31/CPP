#include<iostream>
using namespace std;

class info
{
public :
	int x,y;
};

int main()
{
	info i={10,20};
	cout << i.x <<" "<< i.y << endl;
	return 0;
}
