#include<iostream>
#include<climits>

int large_ele(int a[], int n){
    
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    
    return max;
}

int main()
{
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);

    std::cout <<"Enter 5 arr ele"<< std::endl;
    for(int i=0; i<n; i++){
        std::cin >> a[i];
    }

    std::cout <<"Largest ele : "<< large_ele(a, n) << std::endl;
}