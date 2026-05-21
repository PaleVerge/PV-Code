#include <iostream>
#include "BankAccount.h"
using namespace std;
int BankAccount::nextAccountNumber=1;
int main()
{
	BankAccount account1,account2,account3;
	double total=0;
	account1.deposit(100);
	account2.deposit(200);
	account3.deposit(150);
	total=account1.getBalance()+account2.getBalance()+account3.getBalance();
	cout<<"Total is "<<total<<endl;

	return 0;
}
