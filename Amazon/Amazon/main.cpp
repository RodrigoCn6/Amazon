#include <stdio.h>
#include <Amazon.h>

using namespace std;

int main(int argc, char **argv)
{
	
	Amazon amazon01;
	
	printf("Cadastrar cliente: \n\n\n");
	amazon01.cadastrarCliente();
	printf("Cliente %s cadastrado com sucesso!!\n\n\n\n\n", amazon01.getCliente());
	
	printf("Cadastrar Livro: \n\n\n");
	amazon01.cadastrarLivro();
	printf("Livro %s cadastrado com sucesso!!\n\n\n\n\n", amazon01.getmomeLivro());
	
	return 0;
}
