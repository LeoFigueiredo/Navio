#ifndef NAVIO_H
#define NAVIO_H

#include <iostream>

using std::cout;


class Navio
{

public:
	
	Navio(float = 0.0, float = 0.0, int = 0, int = 0, float = 0.0, float = 0.0); //construtor com variaveis
	
	Navio(const Navio &); //construtor de copia
	
	~Navio(); //destrutor
	void imprimeAtributos();
	void embarcarPessoas();
	void desembarcarPessoas();      
	void hospedarPessoas();        
	void mododeAlerta();

private:
	static float versaoSoftware;  //variavel estatica
	const static int VELOCIDADEMAXIMA = 40; //variavel estatica e constante 
	float *altura;
	float comprimento;
	const int CAPACCOMBUSTIVEL;
	int passageiros;
	float latitude;
	float longitude;
    
};

#endif // NAVIO_H
