#include <iostream>
#include <string>

#include "Conta.cpp"
//#include "Operacao.cpp"
//#include "Credito.cpp"
//#include "Debito.cpp"

using namespace std;


int main(int argc, char **argv){
	Conta c;
	c.setNome("teste");
	cout << c.getNome() << endl;
	return (0);
}
