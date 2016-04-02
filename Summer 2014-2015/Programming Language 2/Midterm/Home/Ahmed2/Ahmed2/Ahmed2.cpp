// Ahmed2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class BankAccount
	{
		int Account_no;
		double Balance;

	public:
		void setBalance(double b);
		void setAccno(int no);
		double getBalance();
		int getAccno();
		void display();
		void withdraw(double amount);
		void deposit(double amount);
	};

void BankAccount::setBalance(double b)
{
	Balance=b;
}

void BankAccount::setAccno(int no)
{Account_no=no;}

double BankAccount::getBalance()
{return Balance;}

int BankAccount::getAccno()
{return Account_no;}

void BankAccount::display()
{cout<<"\nAccount no is"<<Account_no<<"\nBalance is"<<Balance;}

void BankAccount::withdraw(double amount)
{
	if(amount>=Balance)
		cout<<"\nInsufficient Balance";
	Balance-=amount;
}

void BankAccount::deposit(double amount)
{Balance+=amount;}

int main()
{
	BankAccount b1;
	BankAccount b2;

	b1.setAccno(1);
	b1.setBalance(5000.0);

	b2.setAccno(2);
	b2.setBalance(4500.0);

	b1.display();
	b2.display();

	b1.withdraw(500.0);

	b2.deposit(1000.0);

	b1.display();
	b2.display();

	cin.get();

	return 0;
}