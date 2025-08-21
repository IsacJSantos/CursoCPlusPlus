#include <iostream>
#include "Account.h"

int main()
{
	Account account01("Bradesco", 1234, 9999, "Isac", 14690);
	Account account02;

	account02.SetBank("Banco do Brasil");
	account02.SetAgency(5678);
	account02.SetAccountNumber(1010);
	account02.SetOwner("Fulano");
	account02.Deposit(10);

	account01.Transfer(account02, 2000);

	account02.Withdraw(1500);

	system("Pause");
}