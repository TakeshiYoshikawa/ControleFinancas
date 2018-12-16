#include "Conta.h"

#include <iostream>

using namespace std;

void Conta::setNome(string n){
	nome = n;
}

string Conta::getNome(){
	return nome;
}

void Conta::setSaldo(float valor){
	saldo = valor;
}

float Conta::getSaldo(){
	return saldo;
}


string Conta::emitirNotificacao(){
	string notificacao = "Notificacao";
	return notificacao;
}

void Conta::setMeta(float m){
	meta = m;
}

float Conta::getMeta(){
	return meta;
}


