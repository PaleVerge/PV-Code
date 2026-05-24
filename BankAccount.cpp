#include <iostream>
#include "BankAccount.h"
using namespace std;
BankAccount::BankAccount()
{
	accountNo=nextAccountNumber++;
	balance=0;
}
BankAccount::BankAccount(int _accountNo,double _balance):accountNo(_accountNo),balance(_balance){}
void BankAccount::open(int _accountNo,double _balance)
{
accountNo=_accountNo;
balance=_balance;
}
void BankAccount::deposit(double amount)
{
	balance+=amount;
	displayBalance();
}
void BankAccount::withdraw(double amount)
{
	balance-=amount;
		displayBalance();
}
void BankAccount::displayBalance()
{
	cout<<"account No. is "<<accountNo<<", balance is "<<balance<<endl;
}

