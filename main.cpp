#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <cstdlib>

#include "Date.h"
#include "Conta.cpp"
#include "Operacao.cpp"
using namespace std;

int main(int argc, char **argv){
	int opcao;
	float saldo;
	float credito;
	bool key = true;
	
	string nome;
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
				system("cls");
				break;
			case(2):
				cout << "Digite o saldo da conta: ";
				cin >> saldo;
				c.setSaldo(saldo);
				system("cls");
				break;
			case(3):
				cout << "Insira o valor a ser creditado: ";
				cin >> credito;
				o.setValor(credito);
				c.setSaldo(c.getSaldo() + o.getValor());
				lst.push_back(c);
				o.gravarOperacaoEmArquivo(lst);
				system("cls");
				break;
			case(4):
				break;
			case(5):
				system("cls");
				lst.push_back(c);
				o.gravarOperacaoEmArquivo(lst);
				o.lerOperacaoDoArquivo();
				break;
			case(6):
				system("cls");
				cout << "Finalizado.";
				key = false;
		}
	}
	return (0);
}
