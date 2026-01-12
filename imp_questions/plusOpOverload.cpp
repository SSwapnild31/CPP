#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char *ptr;
public:
	String(){
		ptr = new char;
		ptr[0] = '\0';
	}
	
	String(const char *p){
		ptr = new char[strlen(p) + 1];
		strcpy(ptr, p);
	}

	String(const String& obj){
		ptr = new char[strlen(obj.ptr) + 1];
		strcpy(ptr, obj.ptr);
	}

	String operator +(const String& obj) const {
		String temp;
		delete[] temp.ptr;
		
		int mlen = strlen(ptr);
		int nlen = strlen(obj.ptr);

		temp.ptr = new char[mlen + nlen + 1];

		strcpy(temp.ptr, ptr);
		strcat(temp.ptr, obj.ptr );

		return temp;
	}
	
	
	~String(){
		delete[] ptr;
	}

	void display(){
		cout << ptr << endl;
	}
};

int main()
{
	String s1("Swapnil");
	String s2(s1);
	s1.display();
	s2.display();

	if(s1 == s2){
		cout <<"Equal"<< endl;
	}else{
		cout <<"Not Equal!"<< endl;	
	}

	return 0;
}
