#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <cstdlib>

#include "Date.h"
#include "Usuario.h"
#include "Conta.cpp"
#include "Operacao.cpp"
using namespace std;

int main(int argc, char **argv){
	int opcao;
	float saldo;
	string nome;
	bool key = true;
	Operacao o;
	Conta c;
	list<Conta> lst;
	
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
				cout << "Digite o saldo da conta: ";
				cin >> saldo;
				c.setSaldo(saldo);
				break;
			case(3):
				cout << "Insira o valor a ser creditado: ";
				break;
			case(4):
				break;
			case(5):
				o.gravarOperacaoEmArquivo(lst);
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
