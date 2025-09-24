#pragma once
#include "Pessoa.h"

class Professor :public Pessoa
{
	std::string departamento;
	void RealizarChamada();
	void EntregarPauta();
};

