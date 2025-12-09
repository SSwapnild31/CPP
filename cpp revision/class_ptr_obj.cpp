#include<iostream>
using namespace std;

class info
{
	int roll;
	float marks;
	string name;
public :
	info(int r,float m,string s)
	{
		roll  = r;
		marks = m;
		name  = s;
	}
	void display()
	{
		cout << roll <<" "<< name <<" "<< marks << endl;
	}	
};

int main()
{
	info *ptr = new info(1,75,"Swapnil");
	ptr->display();

	return 0;
}
