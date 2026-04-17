#include<iostream>

struct Widget{
        int *data;
        Widget() : data(new int[10]) {}
        ~Widget(){
                delete[] data;
        }
};

int main()
{
        Widget w1;
        Widget w2 = w1;         //copy
}
