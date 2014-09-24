#ifndef AMAZON_H
#define AMAZON_H

#include <string>
using namespace std;

class Amazon
{
public:
	Amazon();
	~Amazon();
	
	void cadastrarCliente();
	void cadastrarLivro();
	
	string getCliente();
	string getmomeLivro();
	
private:
	string cnpj;
	int quantClientes;
	string nomeCLiente;
	string senhaCliente;
	float precoLivro;
	string nomeLivro;

};

#endif // AMAZON_H
