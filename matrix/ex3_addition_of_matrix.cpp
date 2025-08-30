#include<iostream>
using namespace std;

int main()
{
	int a[10][10],b[10][10],sum[10][10];
	int r,c,i,j;
	
	cout <<"Enter row and column"<< endl;
	cin >> r >> c;
	
	cout <<"Enter 1st matrix"<< endl;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin >> a[i][j];
	
	cout <<"Enter 2nd matrix"<< endl;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin >> b[i][j];
	
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			sum[i][j]=a[i][j]+b[i][j];
	
	
	cout <<"Resultant matrix"<< endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout << sum[i][j] <<" ";
		cout << endl;
	}
	return 0;
}
