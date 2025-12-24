#include<iostream>
using namespace std;

class info
{
public :
	info() {
		cout <<"constructor "<< endl;
	}
	~info() {
		cout <<"destructor"<< endl;
	}

	void display(info **p)
	{
		cout <<"member finction"<< endl;
	}
};

int main()
{
	info **p = new info*;
	for(int i=0;i<5;i++)
		p[i] = new info;
	
	int i=0;
	p[i]->display(p);
	return 0;
}
