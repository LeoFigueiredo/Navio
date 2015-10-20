#ifndef NAVIO_H
#define NAVIO_H

class Navio
{

public:
	Navio();
	~Navio();
	void embarcarPessoas();
	void desembarcarPessoas();
	void hospedarPessoas();
	void mododeAlerta();
private:
	static int versaoSoftware;
	static int velocidadeMaxima = 40;
	float altura;
	float comprimento;
	int capacCombustivel;
	int passageiros;
	float latitude;
	float longitude;

};

#endif // NAVIO_H
