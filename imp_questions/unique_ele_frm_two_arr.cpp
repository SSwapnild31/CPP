#include <iostream>

int main()
{
        int a[] = {1,2,3,4};
        int b[] = {1,2,3,4,5};

        int alen = sizeof(a)/sizeof(a[0]);
        int blen = sizeof(b)/sizeof(b[0]);

        int res = 0;

        int i = 0;
        while(i < alen){
                res ^= a[i];
                i++;
        }

        i=0;
        while(i < blen){
                res ^= b[i];
                i++;
        }

        std::cout <<"Unique ele : "<< res << std::endl;
}
