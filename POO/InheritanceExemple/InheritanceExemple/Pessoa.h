#pragma once
#include <iostream>

class Pessoa
{
public:

	Pessoa() :nome(""), cpf(0), matricula(0) {}
	Pessoa(std::string nome, int cpf, int matricula) :nome(nome), cpf(cpf), matricula(matricula) {}

	void AcessarSystema();
	void MostrarDados();

	std::string GetNome();
	void SetNome(std::string nome);
	int GetCpf();
	void SetCpf(int cpf);
	int GetMatricula();
	void SetMatricula(int matricula);

private:
	std::string nome;
	int cpf;
	int matricula;
};

