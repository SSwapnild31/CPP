#include<iostream>
using namespace std;

int main()
{
	int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;
	
	
	cout <<"Enter rows & columns for 1st matrix"<< endl;
	cin >> r1 >> c1 ;

	cout <<"Enter rows & columns for 2nd matrix"<< endl;
	cin >> r2 >> c2 ;
	
	if(c1!=r2)
	{
		cout <<"Matrix multiplication not possible"<< endl;
		return 1;
	}
	
	cout <<"Enter first matrix"<< endl;
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			cin >> a[i][j];
	
	
	cout <<"Enter second matrix"<< endl;
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			cin >> b[i][j];
	
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c1;k++)
				mul[i][j]+=a[i][k]*b[k][j];
		}
	}

	cout <<"resultant matrix"<< endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
			cout << mul[i][j] <<" ";
		cout << endl;
	}
	
	return 0;
}
