#include<iostream>
using namespace std;

struct book
{
	int id;
	float cost;
	void welcome()
	{
		cout <<"welcome to c++ book"<<endl;
	}
};

int main()
{
	book b={10,20};
	cout << b.id <<" "<< b.cost << endl;
	b.welcome();
}
