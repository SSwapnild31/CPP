#include<iostream>

class exam
{
	int *subject;
public:
	exam(){
		subject = new int[5];
	}
	
	exam(const exam &obj){
		subject = new int[5];
		for(int i=0; i<5; i++){
			subject[i] = obj.subject[i];
		}
	}
	
	exam& operator = (const exam &obj){
		if(this != &obj){
			delete[] subject;
			subject = new int[5];

			for(int i=0; i<5; i++){
				subject[i] = obj.subject[i];
			}
		}
		return *this;
	}

	~exam(){
		std::cout <<"Dest"<< std::endl;
		delete[] subject;
	}
};

int main()
{
	exam e1;
	exam e2 = e1;
}
