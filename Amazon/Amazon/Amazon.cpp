#include "Amazon.h"
#include <string.h>

using namespace std;

Amazon::Amazon()
{
	cnpj = "00.000.000/0000-00";
	quantClientes = 0;
	nomeCLiente = "Fulano";
	senhaCliente = "123";
	precoLivro = 10.0;
	nomeLivro = "O Livro";
}

Amazon::~Amazon()
{
}

void Amazon::cadastrarCliente()
{
	string novoCliente = nomeCLiente;
	string novaSenha = senhaCliente;
		
}

void Amazon::cadastrarLivro()
{
	string novoLivro = nomeLivro;
	float valorLivro = precoLivro;
}

string Amazon::getCliente()
{
	return this->nomeCLiente;
}

string Amazon::getmomeLivro()
{
	return this->nomeLivro;
}