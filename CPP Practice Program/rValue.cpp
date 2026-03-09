#include<iostream>

void printName(const std::string& name){
	std::cout <<"[lvalue] "<< name << std::endl;
}

void printName(std::string&& name){
	std::cout <<"[rvalue] "<< name << std::endl;
}

int main()
{
	std::string fname = "Swapnil";
	std::string lname = "Divate";

	std::string fullname = fname + lname;

	printName(fullname);
	printName(fname + lname);
}
