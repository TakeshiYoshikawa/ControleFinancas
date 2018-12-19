#ifndef CONTA_H
#define CONTA_H

#include <iostream>

using namespace std;

class Conta{
	public:
		void setNome(string);
		string getNome();
		void setSaldo(float);
		float getSaldo();
		string emitirNotificacao();
	
	private:
		string nome;
		float saldo;
};

#endif
