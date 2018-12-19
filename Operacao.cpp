#include "Operacao.h"
#include "Usuario.h"

#include <iostream>
#include <list>
#include <fstream>

void Operacao::setValor(float v){
	valor = v;
}

float Operacao::getValor(){
	return valor;
}

void Operacao::setDescricao(string d){
	descricao = d;
}

string Operacao::getDescricao(){
	return descricao;
}

string Operacao::getData(){
	return data.getDate();
}

void Operacao::registrarOperacao(Conta c){
	c.emitirNotificacao();
}

void Operacao::gravarOperacaoEmArquivo(list<Usuario> lst){
	list<Usuario>::iterator it;
	
	ofstream fp("log_de_operacoes.txt", std::ofstream::in);
		
	for(it=lst.begin(); it != lst.end(); it++){
		fp << "Horario: " << getData();
		fp << "Usuario: " << it->nome << endl; 
		fp << "Saldo: " << it->saldo  << endl;
	}
	
	fp.close();
}

//void lerOperacaoDoArquivo(string);




