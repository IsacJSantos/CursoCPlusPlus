#include <iostream>
#include "Account.h"

int main()
{
	Account account01;
	Account account02;

	account01.SetBank("Bradesco");
	account01.SetAgency(1234);
	account01.SetAccountNumber(9999);
	account01.SetOwner("Isac");
	account01.Deposit(14690);
	account01.Withdraw(1500);

	account02.SetBank("Banco do Brasil");
	account02.SetAgency(5678);
	account02.SetAccountNumber(1010);
	account02.SetOwner("Fulano");
	account02.Deposit(10);

	account01.Transfer(account02, 2000);

	account02.Withdraw(1500);

	system("Pause");
}