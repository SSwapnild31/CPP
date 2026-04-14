#include<iostream>
#include<fstream>

struct stud_info{
	int roll_no;
	char name[];
	float marks;
};

class student
{
public:
	void set_data();
	void get_data();
	void write_data();
	void read_data();
};

void student::set_data(){
	stud_info table;
	
	std::cout <<"Enter Name : ";
	std::cin >> table.name;
	
	std::cout <<"Enter Roll_no : ";
	std::cin >> table.roll_no;
	
	std::cout <<"Enter Marks : ";
	std::cin >> table.marks;
}

void student::get_data(){

	std::cout <<"Name	: "<< name;
	std::cout <<"Roll_no 	: "<< roll_no;
	std::cout <<"Marks 	: "<< marks;
}

int main(int argc, char *fname[])
{
	std::fstream fio(fname[1],std::ios::in|std::ios::out|std::ios::trunc);	//w+
	
	student st;

	st.set_data();
	st.get_data();
	
	return 0;
}
