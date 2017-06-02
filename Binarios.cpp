#include "Binarios.h"
#include <iostream>
#include <stdlib.h>
Binarios::Binarios(){
	arreglo = new int[4];
}

Binarios::Binarios(int* barreglos){
	arreglo=barreglos;
}


/*int* Binarios::getArreglo(int llenar){
	srand(time(NULL));
	
	for (int i = 0; i < i<arreglo; ++i)
	{
		llenar=arreglo[i]%2;
	}
}

void llenarArreglo(){
	for (int i = 0; i < count; ++i)
	{
}*/
int* Binarios::getArreglo(){
	return arreglo;
}

void Binarios::setArreglos(){
	
}

Binarios* Binarios::operator+(Binarios* temporal){
	int suma;
	Binarios* temporal1=new Binarios();
	int* numeros = new int[4];
	int* listanumeros = temporal1->getArreglo();

}

Binarios* Binarios::operator-(Binarios*){
	
}

Binarios* Binarios::operator*(Binarios*){
	
}

Binarios* Binarios::operator/(Binarios*){
	
}

Binarios* Binarios::operator^(Binarios*){
	
}

Binarios::~Binarios(){
	delete[] arreglo;
}
