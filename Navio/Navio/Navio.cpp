#include "Navio.h"
#include <iostream>

Navio::Navio()  //construtor
{
latitude = 0.0;
longitude = 0.0;
}

Navio::Navio(float altura, float comprimento, int capacCombustivel, int passageiros, float latitude, float longitude) //construtor de copia
{
 altura >= 0 ? this->altura = altura: this->altura = 0;	
 comprimento >= 0 ? this->comprimento = comprimento: this->comprimento= 0;
 capacCombustivel >= 0 ? this->capacCombustivel = capacCombustivel: this->capacCombustivel = 0;
 passageiros >= 0 ? this->passageiros = passageiros: this->passageiros = 0;
 latitude >= 0 ? this->latitude = latitude: this->latitude = 0;
 longitude >= 0 ? this->longitude = longitude: this->longitude = 0;
}

Navio::~Navio() //destrutor
{

}

int main()
{
	
}