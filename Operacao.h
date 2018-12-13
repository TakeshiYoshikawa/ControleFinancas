#ifndef OPERACAO_H
#define OPERACAO_H

#include <iostream>

using namespace std;

class Operacao{
	public:
		void setValor(float);
		float getValor();
		void setDescricao(string);
		string getDescricao();
		void setData(/*date*/);
		//date getData();
		void registrarOperacao(/*Conta*/);
		void gravarOperacaoEmArquivo(string);
		void lerOperacaoDoArquivo(string);
		
	private:
		float valor;
		string descricao;
		//date data;
};

#endif
