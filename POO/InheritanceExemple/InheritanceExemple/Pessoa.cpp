#include "Pessoa.h"

void Pessoa::AcessarSystema()
{
	std::cout << "** Acesso ao sistema permitido **\n";
}

void Pessoa::MostrarDados()
{
	std::cout << "\n****DADOS****" << "\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCpf() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";

}

std::string Pessoa::GetNome()
{
	return nome;
}

void Pessoa::SetNome(std::string nome)
{
	this->nome = nome;
}

int Pessoa::GetCpf()
{
	return cpf;
}

void Pessoa::SetCpf(int cpf)
{
	this->cpf = cpf;
}

int Pessoa::GetMatricula()
{
	return matricula;
}

void Pessoa::SetMatricula(int matricula)
{
	this->matricula = matricula;
}
