#ifndef CREDITO_H
#define CREDITO_H

#include "Operacao.h"
#include <iostream>

using namespace std;

class Credito: public Operacao{
	public:
		void ajustarValor();
};

#endif
