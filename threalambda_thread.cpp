#include <iostream>
#include <thread>

int main(){

        std::thread t([](){
                std::cout <<"lambda thread running\n";
        });
        t.join();

        return 0;
}
