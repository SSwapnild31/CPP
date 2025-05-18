#include<iostream>
using namespace std;

void inputMatrix(int, int, int **p);
void printMatrix(int, int, int **p);
void mulMatrix(int, int, int **, int **, int **);
void printMatrix(int, int, int **);

int main()
{
	int r,c,i,j;

	cout <<"Enter row & column"<< endl;
	cin >> r >> c ;
	
	int **p,**q,**s;
	
	p=new int* [r];
	q=new int* [r];
	s=new int* [r];
	
	for(i=0;i<c;i++)
	{
		p[i]=new int;
		q[i]=new int;
		s[i]=new int;
	}	
	
	inputMatrix(r,c,p);
	inputMatrix(r,c,q);
	
	mulMatrix(r,c,p,q,s);
	
	cout <<"mul of 2 matrix : "<< endl ;
	printMatrix(r,c,s);

	for(i=0;i<c;i++)
	{
		delete p[i];
		delete q[i];
	}
	delete [] p;
	delete [] q;
	
	return 0;
}

void mulMatrix(int r, int c, int **p, int **q, int **s)
{
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			s[i][j]=p[i][j]*q[i][j];
}

void printMatrix(int r, int c, int **p)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout << p[i][j] <<" ";
		cout << endl;
	}	
}

void inputMatrix(int r, int c, int **p)
{
	cout <<"enter matrix ele : " << endl;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin >> p[i][j];
}
