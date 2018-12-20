#include "Operacao.h"

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
}

void Operacao::gravarOperacaoEmArquivo(list<Conta> lst){
	list<Conta>::iterator it;
	
	ofstream fp("log_de_operacoes.txt", std::ofstream::in);
		
	for(it=lst.begin(); it != lst.end(); it++){
		fp << "Horario: " << getData();
		fp << "Usuario: " << it->getNome() << endl; 
		fp << "Saldo: " << it->getSaldo()  << endl;
	}
	
	fp.close();
}

void Operacao::lerOperacaoDoArquivo(){
	std::string line;
	ifstream fp("log_de_operacoes.txt");
	if(fp.is_open()){
		while(getline(fp, line)){
			cout << line << endl;
		}
	}
	fp.close();
}

void Operacao::ajustarCredito(Conta c){
	c.setSaldo(c.getSaldo() + valor);
}



