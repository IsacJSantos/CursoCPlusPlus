#pragma once
#include <iostream>
#include <string>

class Account
{
private:
	std::string bank;
	int agency;
	int accountNumber;
	std::string owner;
	double balance{ 0 };

public:
	Account();
	Account(std::string bank, int agency, int accountNumber, std::string owner, double balance);
	~Account();
	bool Withdraw(double value);
	void Deposit(double value);
	void Transfer(Account &destiny, double value);
	double CheckBalance();
	std::string GetBank();
	int GetAgency();
	int GetAccountNumber();
	std::string GetOwner();
	void SetBank(std::string bank);
	void SetAgency(int agency);
	void SetOwner(std::string owner);
	void SetAccountNumber(int accountNumber);
};