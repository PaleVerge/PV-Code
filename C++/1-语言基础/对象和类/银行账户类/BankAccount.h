#include <iostream>
using namespace std;
#if!defined ACCOUNT_H
#define ACCOUNT_H
class BankAccount
{
	public:
		BankAccount();
		BankAccount(int _accountNo,double _balance=0);
		void open(int _accountNo,double _balance);
		void deposit(double amount);
		void withdraw(double amount);
		void displayBalance();	
		double getBalance(){return balance;		};
	private:
		static int nextAccountNumber;
		int accountNo;
		double balance;	
};
#endif

