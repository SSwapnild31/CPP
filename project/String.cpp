#include<iostream>
#include<cstring>

#define MAX 1024

using namespace std;

class String
{
	char *ptr;
public:
	String() { ptr = new char[MAX]; }

	String(const char *p){
		ptr = new char[MAX];
		int len = strlen(p);
		int i = 0;
		while(i < len){
			ptr[i] = p[i]; 
			i++;
		}
		ptr[i] = '\0';
	}
	
	String(String &p){
		ptr = new char[MAX];
		int len = strlen(p.ptr);
		int i = 0;
		while(i < len){
			ptr[i] = p.ptr[i];
			i++;
		}
		ptr[i] = '\0';
	}

	~String(){
		delete[] ptr;
	}
};


int main()
{
	String s;
	
	return 0;
}
