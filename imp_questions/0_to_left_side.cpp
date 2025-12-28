#include<iostream>
using namespace std;

int main()
{
    int a[]={1,0,2,0,4,0,0};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0,j=0;j<n;j++){
        if(a[j]==0){
            swap(a[i],a[j]);
            i++;    
        }
    }

    for(int& i : a){
        cout << i<<" ";
    }
    cout << endl;

    return 0;
}