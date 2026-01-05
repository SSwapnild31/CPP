#include<iostream>
#include<cstring>
#define size 1024

using namespace std;

class String
{
	char *ptr;
public:
	String(){
		ptr = new char[size];
	}

	String(const char *p){
		int i;
		int len = strlen(p);
		for(i=0;i<len;i++){
			ptr[i] = p[i]; 
		}
		ptr[i] = p[i];
	}
	
	String(String &p){
		
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
