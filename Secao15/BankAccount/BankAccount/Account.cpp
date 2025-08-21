#include "Account.h";

Account::Account()
{
	std::cout << "\Construtor Objeto Endereco: " << this << " executado.\n";
	this->bank = "";
	this->agency = 0;
	this->accountNumber = 0;
	this->owner = "";
	this->balance = 0;
}

Account::Account(std::string bank, int agency, int accountNumber, std::string owner, double balance)
{
	std::cout << "\Construtor Objeto Endereco: " << this << " executado.\n";
	this->bank = bank;
	this->agency = agency;
	this->accountNumber = accountNumber;
	this->owner = owner;
	this->balance = balance;
}

Account::~Account()
{
	std::cout << "\nDestrutor Objeto Endereco: " << this << " executado.\n";
}

bool Account::Withdraw(double value)
{
	if (balance < value)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$" << CheckBalance() << "\n";
		return false;
	}

	balance -= value;
	std::cout << "\nSeu saldo atual: R$" << CheckBalance() << "\n";
	return true;
}

void Account::Deposit(double value)
{
	balance += value;
	std::cout << "\nDeposito de R$" << value << " efetuado com sucesso!\n";
}

void Account::Transfer(Account& destiny, double value)
{
	if (balance < value)
	{
		std::cout << "\nSaldo Insuficiente\n";
	}
	else
	{
		destiny.Deposit(value);
		balance -= value;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << destiny.GetOwner() << "\n";
		std::cout << "Banco: " << destiny.GetBank() << "\n";
		std::cout << "Agencia: " << destiny.GetAgency() << "\n";
		std::cout << "Conta: " << destiny.GetAccountNumber() << "\n";
		std::cout << "Transferencia realizada com sucesso!";
	}
}

double Account::CheckBalance()
{
	return balance;
}

std::string Account::GetBank()
{
	return bank;
}

int Account::GetAgency()
{
	return agency;
}

int Account::GetAccountNumber()
{
	return accountNumber;
}

std::string Account::GetOwner()
{
	return owner;
}

void Account::SetBank(std::string bank)
{
	this->bank = bank;
}

void Account::SetAgency(int agency)
{
	this->agency = agency;
}

void Account::SetOwner(std::string owner)
{
	this->owner = owner;
}

void Account::SetAccountNumber(int accountNumber)
{
	this->accountNumber = accountNumber;
}
