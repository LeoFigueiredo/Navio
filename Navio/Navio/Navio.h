#ifndef NAVIO_H
#define NAVIO_H

class Navio
{

public:
	Navio(); //construtor
	
	Navio(float, float, int, int, float, float); //construtor com variaveis
	
	Navio(const Navio &); //construtor de copia
	
	~Navio(); //destrutor
	
	void embarcarPessoas();
	void desembarcarPessoas();      
	void hospedarPessoas();        
	void mododeAlerta();

private:
	static int versaoSoftware;  //variavel estatica
	const static int velocidadeMaxima = 40; //variavel estatica e constante 
	float altura;
	float comprimento;
	int capacCombustivel;
	int passageiros;
	float latitude;
	float longitude;

};

#endif // NAVIO_H
