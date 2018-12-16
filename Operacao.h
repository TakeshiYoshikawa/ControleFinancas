#ifndef OPERACAO_H
#define OPERACAO_H

#include "Conta.h"
#include <iostream>

using namespace std;

class Operacao{
	public:
		void setValor(float);
		float getValor();
		void setDescricao(string);
		string getDescricao();
		// Não há implementação nativa duma biblioteca date em C++, logo foi implementado um método para receber a data atual.
		string getData();
		void registrarOperacao(Conta);
		void gravarOperacaoEmArquivo(string);
		void lerOperacaoDoArquivo(string);
		void ajustarValor(); 
		
	private:
		float valor;
		string descricao;
		string data;
};

#endif
