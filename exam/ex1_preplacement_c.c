//wap to add a node in sll, if rollno is prime using add_end_prime() function.

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int rollno;
	char name[20];
	struct st *next;
}sll;

void add_end_prime(sll**);
void display(sll*);

int main()
{
	sll *head = 0;
	int op;
	while(1)
	{
		printf("1.add_end_prime 2.display 3.exit \nEnter option : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : add_end_prime(&head);	break;
			case 2 : display(head);		break;
			case 3 : exit(0);
			default : printf("wrong option..!\n");
		}
	}
	return 0;
}

void display(sll *ptr)
{
	if(ptr==0)
	{
		printf("No records found..!\n");
		return ;
	}
	printf("-------data-------\n");
	while(ptr)
	{
		printf("%d %s\n",ptr->rollno,ptr->name);
		ptr = ptr->next;
	}
}

void add_end_prime(sll **ptr)
{
	sll *new = malloc(sizeof(sll));

	printf("Enter rollno and name\n");
	scanf("%d %s",&new->rollno,new->name);
	new->next = 0;

	int i,num = new->rollno;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
	{
		if(*ptr==0)
			*ptr = new;
		else
		{
			sll *last = *ptr;
			while(last->next)
				last = last->next;
			last->next = new;
		}
		printf("node added..\n");
	}
}
