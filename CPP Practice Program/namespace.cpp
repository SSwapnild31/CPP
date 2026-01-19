#include<iostream>
using namespace std;

namespace data{
	int i = 10;
};

int main()
{	
	cin >> data::i;
	cout << data::i << endl;
	return 0;
}
