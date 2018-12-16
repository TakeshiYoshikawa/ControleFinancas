#include <iostream>
#include <string>
#include <ctime>

#include "Conta.cpp"
#include "Operacao.cpp"

using namespace std;


int main(int argc, char **argv){
	
	Conta c;
	c.setNome("Lixo");
	c.setSaldo(666);
	c.setMeta(0);
	
	Operacao o;
	o.registrarOperacao(c);
	
	/*
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	cout << "Month: "<< 1 + ltm->tm_mon<< endl;
	cout << "Day: "<<  ltm->tm_mday << endl;
	cout << "Time: "<< ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
	
	//c.setMeta(434);
	//cout << c.getMeta() << endl;
	*/
	
	
	return (0);
}
