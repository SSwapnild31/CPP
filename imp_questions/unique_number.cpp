#include<iostream>
using namespace std;

void uniqueNumber(int a[],int n){
    int res = 0;
    for(int i=0;i<n;i++){
        res ^= a[i];
    }

    cout << res << endl;
}

int main()
{
    int a[] = {1,2,3,3,2,1,7};
    int n = sizeof(a)/sizeof(a[0]);

    uniqueNumber(a,n);
    return 0;
}