#include<iostream>
using namespace std;

class info
{
	int rollno;
public :
	info(int r)
	{
		rollno = r;
	}
	int display()
	{
		return rollno;
	}
};

int main()
{
	info i(74);
	cout << i.display() << endl;

	return 0;
}
