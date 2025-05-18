#include<iostream>
using namespace std;

void fun(int r,int c,int **p)
{
	static int i=0,j=0;
	
	if(i<r)
	{
		if(j<c)
		{
			cout << p[i][j] <<" ";
			j++;
		}
		else
		{
			j=0;
			i++;
			cout << endl;
		}
		fun(r,c,p);
	}
}

int main()
{
	int **p,r,c,i,j;
	
	cout <<"Enter row & column : "<< endl;
	cin >> r >> c;
	
	p=new int* [r];
	
	cout <<"Enter arr ele"<< endl;
	for(i=0;i<c;i++)
		p[i]=new int;
	
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin >> p[i][j];
	
	fun(r,c,p);
}

