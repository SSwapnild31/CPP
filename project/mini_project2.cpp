#include<iostream>
#define size 5
using namespace std;

template<class type>
class Stack
{
	static int top,flag;
	type stk[size]; 

 public :
	Stack()
	{
		top = -1;
	}	

	void push()
	{
		if(top==size)
		{
			cout <<"stack is overflow..!"<< endl;
			return ;
		}
		cout <<"Enter value to push : ";
		cin >> stk[++top];
		cout <<"-----------------------------"<< endl;
		cout <<"pushed : "<< stk[top] << endl;
		cout <<"-----------------------------"<< endl;
	}

	void pop()
	{
		if(top==-1)
		{
			cout <<"stack is underflow..!"<< endl;
			return ;
		}
		cout <<"deleted : "<< stk[top--] << endl;
		cout <<"-----------------------------"<< endl;
	}

	void display()
	{
		if(top==-1)
		{
			cout <<"stack is empty..!"<< endl;
			return ;
		}

		for(int i=0;i<=top;i++)
			cout << stk[i] <<" ";
		cout << endl;
		cout <<"-----------------------------"<< endl;
	}

	void stack_type()
	{
		int op,ch;
		if(flag)
		{
			cout <<"0.countinue old stck"<< endl <<"1.new stack"<< endl;
			cout <<"-----------------------------"<< endl;
			cout <<"Enter option : ";
			cin >> ch;
			cout <<"-----------------------------"<< endl;
			ch ?  : flag = 0 ; 
		}
		flag++;
		while(1)
		{
			cout <<"1.push  3.display"<< endl <<"2.pop   4.main menu" << endl;
			cout <<"-----------------------------"<< endl;
			cout <<"Enter option : ";
			cin >> op;
			cout <<"-----------------------------"<< endl;
			switch(op)
			{
				case 1 : push();	break;
				case 2 : pop();		break;
				case 3 : display();	break;
				case 4 : return ;
				default : cout <<"wrong option..!"<< endl;
			}
		}
	}
};

template<class type>
int Stack<type>::top;

template<class type>
int Stack<type>::flag;

int main()
{
	Stack<int> obj1;
	Stack<char> obj2;
	Stack<float> obj3;
	Stack<double> obj4;
	Stack<string> obj5;
	
	cout <<"-----------------------------"<< endl;
	int op;
	static int op_count;
	while(1)
	{
		cout <<"1.int   3.float   5.string"<< endl <<"2.char  4.double  6.exit"<< endl;
		cout <<"-----------------------------"<< endl;
		cout <<"Enter option : ";
		cin >> op ;
		cout <<"-----------------------------"<< endl;
		switch(op)
		{
			case 1 :  obj1.stack_type();	break;
			case 2 :  obj2.stack_type();	break;
			case 3 :  obj3.stack_type();	break;
			case 4 :  obj4.stack_type();	break;
			case 5 :  obj5.stack_type();	break;
			case 6 :  exit(0);
			default : op_count++; 
				  if(op_count==1)
				  {
				  	cout <<"read option carefully..!"<< endl;
					cout <<"-----------------------------"<< endl;
				  }
				  else if(op_count==2)
				  {
				  	cout <<"last chance, read carefully..!"<< endl;
					cout <<"-----------------------------"<< endl;
				  }
				  else 
				  {
					cout <<"thanks for using application "<< endl <<"read manual properly & comeback"<< endl;
					cout <<"-----------------------------"<< endl;
				  	op_count = 0;
					return 0;
				  }
		}
	}
	
	return 0;
}
