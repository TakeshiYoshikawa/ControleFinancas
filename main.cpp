#include <iostream>
#include <string>

#include "Conta.cpp"
#include "Operacao.cpp"
//#include "Credito.cpp"
//#include "Debito.cpp"

using namespace std;


int main(int argc, char **argv){
	Conta c;
	c.setMeta(434);
	cout << c.getMeta() << endl;
	return (0);
}
