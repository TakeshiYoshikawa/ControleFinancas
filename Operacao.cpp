#include "Operacao.h"
#include "Conta.h"
#include <iostream>

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





