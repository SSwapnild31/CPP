#include<iostream>

void printName(std::string& name){

	std::cout << name << std::endl;
}

int main()
{
	std::string fname = "Swapnil";
	std::string lname = " Divate";

	std::string fullname = fname + lname;

	printName(fullname);
	printName(fname + lname);

}
