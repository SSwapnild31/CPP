#include<iostream>

class exam
{
	int *subject;
public:
	//default constructor
	exam(){
		std::cout <<"Constructor"<< std::endl;
		subject = new int[5];
	}
	
	//copy constructor
	exam(const exam &obj){
		subject = new int[5];
		for(int i=0; i<5; i++){
			subject[i] = obj.subject[i];
		}
	}

	//copy assignment
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
	
	//move constructor
	exam(exam &&obj){
		subject = obj.subject;
		obj.subject = nullptr;
	}
	
	//move assignment
	exam& operator = (exam &&obj){
		if(this != &obj){
			delete[]  subject;
			subject = obj.subject;
		}
		obj.subject = nullptr;
		return *this;
	}
	
	//destructor
	~exam(){
		std::cout <<"Destructor"<< std::endl;
		delete[] subject;
	}
};

int main()
{
	exam e1;
	exam e2 = std::move(e1);	
	
	exam e3(std::move(e2));		
}
