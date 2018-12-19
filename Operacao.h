#ifndef OPERACAO_H
#define OPERACAO_H

#include "Conta.h"
#include "Date.h"
#include "Usuario.h"
#include <list>
#include <iostream>

using namespace std;

class Operacao: public Date{
	public:
		void setValor(float);
		float getValor();
		void setDescricao(string);
		string getDescricao();
		
		// Não há implementação nativa duma biblioteca date em C++, logo foi implementado um método para receber a data atual.
		string getData();
		
		void registrarOperacao(Conta);
		void gravarOperacaoEmArquivo(list<Conta>);
		void lerOperacaoDoArquivo(string);
		void ajustarValor(); 
		
	private:
		float valor;
		string descricao;
		Date data;
};

#endif
