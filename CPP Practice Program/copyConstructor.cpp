#include<iostream>
using namespace std;

class Data
{
	int data;
public:
	Data(){ }
	Data(int d){ 
		data = d; 
	}
	Data(const Data& d){
		data = d.data;
	}
	void setData(){
		cout <<"Enter data : ";
		cin >> data;
	}
	void getData(){
		cout <<"data : "<< data << endl;
	}
};

int main()
{
	Data d1;
	d1.setData();
	Data d2(d1);
	d1.getData();
	d2.getData();
	
	return 0;
}
