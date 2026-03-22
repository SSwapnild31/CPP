#include<iostream>

int main()
{
    char str[50];
    int x;
  
    //lambda function captures local variable as reference
    auto getString = [&](){
        std::cout <<"Enter string : ";
        std::cin.getline(str, 49);

        std::cin >> x ;
        std::cout <<"str in lambda : " << str << std::endl;
        std::cout <<"x in lambda : "<< x << std::endl;
    };

    getString();

    std::cout <<"str in main : "<< str << std::endl;
    std::cout <<"x in main : "<< x << std::endl;
}
