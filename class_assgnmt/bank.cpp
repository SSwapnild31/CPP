#include<iostream>
using namespace std;

class bank;

class users
{
	int acc_no;
	int balance;
	friend class bank;	

	void set_data(int i)
	{
		acc_no=i;
		balance=100;
	}
};

class bank
{
	users obj[5];
public :
	bank()
	{
		for(int i=0;i<5;i++)
			obj[i].set_data(i+1);
	}
	
	int check_acc(int acc_no);
	void check_balance(int acc_no);
	int deposit_money(int acc_no);
	void widthdraw_money(int acc_no);
};

void bank::widthdraw_money(int acc_no)
{
	int money;
	cout <<"Enter money : ";
	cin >> money;
	for(int i=0;i<5;i++)
	{
		if(obj[i].acc_no==acc_no)
			obj[i].balance=obj[i].balance-money;
	}
	cout <<"-----------------------"<< endl;
}

int bank::deposit_money(int acc_no)
{
	int money;
	cout <<"Enter money : ";
	cin >> money;
	for(int i=0;i<5;i++)
	{
		if(obj[i].acc_no==acc_no)
		{
			obj[i].balance=obj[i].balance+money;
			return 1;
		}
	}
	return 0;
}

void bank::check_balance(int acc_no)
{
	for(int i=0;i<5;i++)
	{
		if(obj[i].acc_no==acc_no)
			cout <<"Current balance : "<< obj[i].balance << endl;
	}
	cout <<"-----------------------"<< endl;
}

int bank::check_acc(int acc_no)
{
	for(int i=0;i<5;i++)
		if(obj[i].acc_no==acc_no)
			return 1;
	return 0;
}

int main()
{
	bank obj;
	cout <<"~~~~~~~ WELCOME ~~~~~~~"<< endl;
	while(1)
	{
		int ch;
		cout <<"1.login user \n2.exit from bank"<< endl;
		cout <<"-----------------------"<< endl;
		cout <<"Enter option : ";
		cin >> ch;
		cout <<"-----------------------"<< endl;

		switch(ch)
		{	
			int acc_no;
				
			case 1 : cout <<"Enter acc no : ";
				 cin >> acc_no;
				 if(obj.check_acc(acc_no))
				 {
					 cout <<"Logged in successfully\n"<<endl;
					 while(1)
					 {
						 int op;
						 cout <<"-----------------------"<< endl;
						 cout <<"1.check balance \n2.deposit money \n3.widthdraw money \n4.send money \n5.log-out"<< endl;
						 cout <<"-----------------------"<< endl;
						 cout <<"Enter option : ";
						 cin >> op;
						 cout <<"-----------------------"<< endl;
						 if(op==5) break;
						 switch(op)
						 {
							 case 1 : obj.check_balance(acc_no); break;
							 case 2 : if(obj.deposit_money(acc_no))
									  cout <<"Successfully deposited.."<< endl;
								  else
									  cout <<"Not deposited..!"<< endl;
								  cout <<"-----------------------"<< endl;
								  break;
							 case 3 : obj.widthdraw_money(acc_no); break;
						 }
					 }
				 }
				 else
					 cout <<"oops! wrong acc no.."<< endl;
				 break;
			case 2 : cout <<"~~~~~~ THANK YOU ~~~~~~"<< endl; exit(0);
			default : cout <<"oops! wrong option"<< endl;
		}
	}
	return 0;
}
