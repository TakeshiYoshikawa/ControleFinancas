#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Date.h"
#include "Usuario.h"
#include "Conta.cpp"
#include "Operacao.cpp"
using namespace std;

int main(int argc, char **argv){
	int opcao;
	string nome;
	bool key = true;
	Conta c;
	while(key == true){
		cout << "Selecione uma operacao:\n";
		cout << "1) Registrar novo usuario\n";
		cout << "2) Registrar saldo\n";
		cout << "3) Realizar operacao de credito\n";
		cout << "4) Realizar operacao de debito\n";
		cout << "5) Exibir historico de operacoes\n";
		cout << "6) Encerrar o programa\n";
		cout << "Selecione a opcao: ";
		cin >> opcao;
		switch(opcao){
			case(1):
				cout << "Digite o nome do usuario: ";
				cin >> nome;
				c.setNome(nome); 
				break;
			case(2):
				break;
			case(3):
				break;
			case(4):
				break;
			case(5):
				break;
			case(6):
				system("cls");
				cout << "Finalizado.";
				key = false;
		}
	}
	
	/*
	list<Usuario> lst;
	Usuario u;
	Operacao o;
	u.nome = "Carlos";
	u.saldo = 100;
	
	lst.push_back(u);
	
	o.gravarOperacaoEmArquivo(lst);
	*/
	return (0);
}
