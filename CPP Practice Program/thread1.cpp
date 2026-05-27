#include <iostream>
#include <thread>

void execute(std::string s){
        std::cout <<"In thread : "<< s << std::endl;
}

int main()
{
        std::thread t(execute, "Hello from main");
        t.join();
}
