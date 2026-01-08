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

	~String(){
		delete[] ptr;
	}
		
	bool operator == (const String obj){
		if(strlen(obj.ptr) != strlen(this->ptr)){
			return false;
		}
		for(int i = 0; obj.ptr[i]!='\0'; i++){
			if(obj.ptr[i] != this->ptr[i]){
				return false;
			}
		}
		return true;
	}

	String operator + (String obj){
		String temp;
		int i = 0;
		while(this->ptr[i] != '\0'){
			temp.ptr[i] = this->ptr[i];
			i++;
		}
		int j = 0;
		while(obj.ptr[j] != '\0'){
			temp.ptr[i++] = obj.ptr[j++];
		}
		temp.ptr[i] = '\0';
		
		return temp;
	}

	String operator = (String obj){
		String temp;
		int i = 0;
		while(obj.ptr[i] != '\0'){
			temp.ptr[i] = obj.ptr[i];
			i++;
		}
		return temp;
	}

	//friend functions
	
	friend int Strlen(const String&);
	friend void Strcpy(const String&, String&);
	friend String Strchr(const String&, char);
	friend String Strstr(const String&, const String&);
	friend void Strrev(String&);
	friend void Strupper(String&);
	friend void Strlower(String&);
};

void Strlower(String &obj){
	int i = 0;
	while(obj.ptr[i]='\0'){
		if(obj.ptr[i]>='A' || obj.ptr[i]<='Z'){
			obj.ptr[i] += 32; 
		}
		i++;
	}

}

void Strupper(String &obj){
	int i = 0;
	while(obj.ptr[i]='\0'){
		if(obj.ptr[i]>='a' || obj.ptr[i]<='z'){
			obj.ptr[i] -= 32; 
		}
		i++;
	}
}

void Strrev(String &obj){
	int j = strlen(obj.ptr)-1;
	int i = 0 ;
	
	while(i<j){
		char c = obj.ptr[i];
		obj.ptr[i] = obj.ptr[j];
		obj.ptr[j] = c;
		i++;
		j--;
	}
}

int Strlen(const String &p){
	int len = 0;
	int i = 0;
	while(p.ptr[i] != '\0'){
		len++;
		i++;
	}
	return len;
}

void Strcpy(const String &src,String &dest){
	int i = 0;
	while(src.ptr[i] != '\0'){
		dest.ptr[i] = src.ptr[i];
		i++;
	}
	dest.ptr[i] = '\0';
}

String Strchr(const String &p, char ch){
	int i = 0;
	while(p.ptr[i] != '\0'){
		if(p.ptr[i] == ch){
			return &p.ptr[i];
		}
		i++;
	}
	return nullptr;
}

String Strstr(const String &str,const String &sub){
	
	int m = strlen(str.ptr);
	int n = strlen(sub.ptr);
	
	if(n > m){
		return nullptr;
	}
	
	int i = 0, j;
	while(str.ptr[i] != '\0'){
		if(str.ptr[i] == sub.ptr[0]){
			for(j = 1; j < n; j++){
				if(str.ptr[i+j] != sub.ptr[j]){
					break;
				}
			}
			if(sub.ptr[j] == '\0'){
				return &str.ptr[i];
			}
		}
	}
	return nullptr;
}

int main()
{
	String s("Swapnil");
	String s1(s);
	
	return 0;
}
