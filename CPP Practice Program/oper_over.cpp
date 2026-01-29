#include<iostream>
#include<cstring>
using namespace std;

class Data
{
private:
	char *ptr;
public :
	Data(){
		ptr = new char[1];
		ptr[0] = '\0';
	}
	Data(const char *p){
		ptr = new char[strlen(p)+1];
		strcpy(ptr, p);
	}
	Data(const Data& d){
		ptr = new char[strlen(d.ptr)+1];
		strcpy(ptr, d.ptr);
	}
	~Data(){
		delete[] ptr;
	}
	
	Data& operator = (const Data& d){
		ptr = new char[strlen(d.ptr)+1];
		strcpy(ptr, d.ptr);
		return *this;
	}
	
	Data operator + (const Data& d){
		Data temp;
		delete[] temp.ptr;

		int nlen = strlen(ptr);
		int mlen = strlen(d.ptr);

		temp.ptr = new char[nlen + mlen + 1];
		strcpy(temp.ptr, ptr);
		strcat(temp.ptr, d.ptr);

		return temp;
	}
	
	void getData(){
		cout << ptr << endl;
	}
};

int main()
{
	Data d1("Swapnil");
	Data d2(d1);
	d1.getData();
	d2.getData();

	d2 = "Divate";
	d2.getData();

	Data d3 = d1;
	d3.getData();

	d3 = d1 + d2;
	d3.getData();
	return 0;
}
