#include <iostream>

class base
{
    private:
        base();
        ~base();
    public:
        static void display();
};

void base::display(){
    std::cout<<"static method"<< std::endl;
}

base::base(){
    std::cout<<"Constructor"<<std::endl;
}

base::~base(){
    std::cout<<"Destructor"<<std::endl;
}

int main()
{
    //base b;
    base::display();
    return 0;
}
