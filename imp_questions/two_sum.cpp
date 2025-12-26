#include<iostream>
#include<algorithm>

using namespace std;

void targetSum(int a[],int n,int k){
    sort(a,a+n);

    int i=0,j=n-1;
    while(i<j){
        int sum = a[i] + a[j];
        
        if(sum == k){
            cout << a[i] <<" "<< a[j] << endl;
            return ;
        }
        else if(sum < k){
            i++;
        }
        else {
            j--;
        }
    }
}

int main()
{
    int a[] = {3,5,15,11,8};
    int k = 20;

    int n = sizeof(a)/sizeof(a[0]);

    targetSum(a,n,k);

    return 0;
}