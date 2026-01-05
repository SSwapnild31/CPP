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
	
	String(const String &p){
		ptr = new char[MAX];
		
		int len = strlen(p.ptr);
		int i = 0;
		while(i < len){
			ptr[i] = p.ptr[i]; 
			i++;
		}
		ptr[i] = '\0';
	}

	void Strcpy(char *src,char *dest){
		while(*dest++ = *src++);
	}
	
	bool operator = (const String str1){
		if(strlen(str1.ptr) != strlen(str2.ptr)){
			return false;
		}
		for(int i=0;str1.ptr[i]!='\0';i++){
			if(str1.ptr[i] != str2.ptr[i]){
				return false;
			}
		}
		return true;
	}

	~String(){
		delete[] ptr;
	}
};


int main()
{
	String s("Swapnil");
	String s1(s);
	
	return 0;
}
