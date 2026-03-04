#include<iostream>
#include<thread>
using namespace std;

int main()
{
	int num;
	cout <<"Enter number : ";
	cin >> num;

	thread t([&num](){
		cout <<"number : "<< num << endl;
		num = 100;
	});

	t.join();
	cout <<"number : "<< num << endl;
	
	return 0;
}
