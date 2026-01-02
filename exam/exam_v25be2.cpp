#include<iostream>
using namespace std;

class base
{
	char *str;
	friend void checkbit(base&);
public :
	base(){
		str = new char[100];
	}
	~base(){
		delete[] str;
	}
	void setData(){
		cout <<"Enter string : ";
		cin.getline(str,100);
	}
	void getData(){
		cout << str << endl;
	}

};

void checkbit(base &obj)
{
	for(int i = 0; obj.str[i] !='\0'; i++){

		unsigned char ch = obj.str[i];
		int count = 0;
		
		for(int pos = 7; pos >= 0; pos--){
			if((ch >> pos) & 1){
				count++;
			}
		}

		if(count % 2 == 0){
			for(int j = i; obj.str[j] !='\0'; j++){
				obj.str[j]=obj.str[j+1];
			}
			i--;
		}
	}
}

int main()
{
	base b;
	b.setData();
	b.getData();
	checkbit(b);
	b.getData();
	return 0;
}
