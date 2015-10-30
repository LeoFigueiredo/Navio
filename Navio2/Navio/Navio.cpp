#include "Navio.h"


float Navio::versaoSoftware = 1.0;

Navio::Navio(float altura, float comprimento, int passageiros, float latitude, float longitude, const string &idReg)
:CAPACCOMBUSTIVEL(100)
{

    //altura >= 0 ? this->altura = new float(altura): this->altura = new float(0);   -------- exemplo de alocação --------

	altura >= 0 ? this->altura = altura: this->altura= 0;
    comprimento >= 0 ? this->comprimento = comprimento: this->comprimento= 0;
    passageiros >= 0 ? this->passageiros = passageiros: this->passageiros = 0;
    latitude >= 0 ? this->latitude = latitude: this->latitude = 0;
    longitude >= 0 ? this->longitude = longitude: this->longitude = 0;

    this->idRegMan =  NULL;
}
void Navio::imprimeAtributos(){

	cout <<"Atributos:";
	cout <<"\naltura: " << this->altura;
	cout <<"\ncomprimento: " <<this->comprimento;
	cout <<"\npassageiros: " <<this->passageiros;
	cout <<"\nlatitude: " <<this->latitude;
    cout <<"\nlongitude: "<<this->longitude;
	cout <<"\nRegistro de Manutencao: ";
	if ( this->idRegMan != NULL ){
        for (int i = 0; i< this->idRegMan->size(); i++){
            cout << this->idRegMan[i];
        }
	}
}

Navio::Navio (const Navio &c)  //contrutor de cópia
:CAPACCOMBUSTIVEL(c.CAPACCOMBUSTIVEL)
{
    this->altura = c.altura;
    this->comprimento = c.comprimento;

    this->passageiros = c.passageiros;
    this->latitude = c.latitude;
    this->longitude = c.longitude;
}


void Navio::addRegManutencao( const string &novoId )
{
    if (numReg != 0)
    {
        string *aux = new string[numReg];

        for(int i =  0; i < numReg; i++)
            aux[i] = idRegMan[i];

        delete [] idRegMan;

        idRegMan = new string[numReg++];

        for(int i =  0; i < numReg; i++)
            idRegMan[i] = aux[i];

        idRegMan[numReg-1] = novoId;

        delete [] aux;


    }else
    {
        numReg++;
        idRegMan = new string[numReg];
        idRegMan[0] = novoId;
    }
}

Navio::~Navio() //destrutor - libera o recurso
{
	delete idRegMan;
}

