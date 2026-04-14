#include<iostream>
#include<fstream>

struct stud_info{
	int roll_no;
	char name[50];
	float marks;
};

class student
{
	stud_info table;
public:
	void set_data();
	void get_data();
	void write_data();
	void read_data();
};

void student::set_data(){

	std::cout <<"Enter Name : ";
	std::cin >> table.name;
	
	std::cin.ignore();

	std::cout <<"Enter Roll_no : ";
	std::cin >> table.roll_no;
	
	std::cout <<"Enter Marks : ";
	std::cin >> table.marks;
}

void student::get_data(){

	std::cout <<"Name	: "<< table.name << std::endl;
	std::cout <<"Roll_no : "<< table.roll_no << std::endl;
	std::cout <<"Marks 	: "<< table.marks << std::endl;
}

int main(int argc, char *fname[])
{
	std::fstream fio(fname[1],std::ios::in|std::ios::out|std::ios::trunc);	//w+
	
	student st;

	st.set_data();
	st.get_data();
	
	fio.close();
	return 0;
}
