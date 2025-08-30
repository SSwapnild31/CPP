#include<iostream>
using namespace std;

int main()
{
	int a[10][10],t[10][10];
	int r,c,i,j;
	
	cout <<"Enter rows & columns"<< endl;
	cin >> r >> c;
	
	cout <<"Enter the matrix"<< endl;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin >> a[i][j];
	
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			t[j][i]=a[i][j];
		
	cout <<"Transpose of matrix"<< endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout << t[i][j] <<" ";
		cout << endl;	
	}
	return 0;
}
