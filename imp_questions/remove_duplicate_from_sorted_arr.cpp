#include<iostream>
using namespace std;

int main()
{
    int a[]={1,1,2,2,3,3,3,4,4};
    int len = sizeof(a)/sizeof(a[0]);

    int i = 0;
    for(int j=1;j<len;j++){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }
    }

    for(int k=0;k<=i;k++){
        cout << a[k] <<" ";
    }
    cout << endl;

    return 0;
}