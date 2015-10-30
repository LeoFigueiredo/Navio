#ifndef NAVIO_H
#define NAVIO_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Navio
{

public:

	Navio(float = 0.0, float = 0.0, int = 0, float = 0.0, float = 0.0, const string &idRegMan = ""); //construtor com variaveis

	Navio(const Navio &); //construtor de copia

	~Navio(); //destrutor

	//funções
	void addRegManutencao( const string &novoId );
	void imprimeAtributos();
	void embarcarPessoas();
	void desembarcarPessoas();
	void hospedarPessoas();
	void mododeAlerta();
    //funções

private:
	static float versaoSoftware;  //variavel estatica
	const static int VELOCIDADEMAXIMA = 40; //variavel estatica e constante
	float altura;
	float comprimento;
	const int CAPACCOMBUSTIVEL;
	int passageiros;
	float latitude;
	float longitude;
	string *idRegMan;
	int numReg;

};

#endif // NAVIO_H
