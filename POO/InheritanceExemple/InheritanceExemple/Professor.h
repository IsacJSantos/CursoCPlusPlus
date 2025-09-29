#pragma once
#include "Pessoa.h"

class Professor :public Pessoa
{
public:
	
	Professor() :Pessoa(), departamento("") {}
	Professor(std::string nome, int cpf, int matricula, std::string departamento) : Pessoa(nome, cpf, matricula), departamento(departamento) {}

	void RealizarChamada();
	void EntregarPauta();
	void MostrarDados();

	std::string GetDepartamento();
	void SetDepartamento(std::string departamento);

private:
	std::string departamento;
};

