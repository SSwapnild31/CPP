#include<iostream>
#include<climits>

int second_larg(int a[], int n){
    int large = INT_MIN;
    int sec_large = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i] > large){
            sec_large = large;
            large = a[i];
        }        
        if(a[i] > sec_large && a[i] < large){
            sec_large = a[i];
        }
    }
    return sec_large;
}

int main()
{
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);

    std::cout <<"Enter 5 arr ele"<< std::endl;
    for(int i=0; i<n; i++){
        std::cin >> a[i];  
    }  

    std::cout <<"second largest : "<< second_larg(a, n) << std::endl;
}