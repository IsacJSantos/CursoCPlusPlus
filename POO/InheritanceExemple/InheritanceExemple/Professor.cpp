#include "Professor.h"

void Professor::RealizarChamada()
{
	std::cout << "Chamada efetuada\n";
}

void Professor::EntregarPauta()
{
	std::cout << "Pauta entregue\n";
}

void Professor::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << "\n";
}

std::string Professor::GetDepartamento()
{
	return departamento;
}

void Professor::SetDepartamento(std:: string departamento)
{
	this->departamento = departamento;
}
