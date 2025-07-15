#include<stdio.h>

void print_binary(int);
void main()
{
	for(int num=44;num<56;num++)
		print_binary(num);
}

void print_binary(int num)
{
	static int pos = 31;
	if(pos<0)
	{
		pos = 31;
					//printf("\n");
		return ;
	}
	else
	{
		printf("%d",num>>pos&1);
		pos--;
		print_binary(num);
	}
}
