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

void Binarios::setArreglo(int* carreglo){
	this->arreglo=carreglo;
}

Binarios* Binarios::operator+(Binarios* temporal){
	int suma;
	Binarios* temporal1=new Binarios();
	int* numeros = new int[4];
	int* listanumeros = temporal->getArreglo();
	for (int i = 0; i < 4; ++i){
		suma=arreglo[i]+listanumeros;
		if (suma>0)
		{
			numeros[i]=1;
		}else{
			numeros[i]=0;
		}
	}
	temporal1->setArreglo(numeros);
	return temporal1;

}

Binarios* Binarios::operator-(Binarios* temporal){
	int resta;
	Binarios* temporal1=new Binarios();
	int* numeros = new int[4];
	int* listanumeros = temporal1->getArreglo();
	for (int i = 0; i < 4; ++i){
		resta=arreglo[i]-listanumeros;
		if (resta==0)
		{
			numeros[i]=1;
		}else{
			numeros[i]=0;
		}
	}
	temporal->setArreglo(numeros);
	return temporal1;
}

Binarios* Binarios::operator*(Binarios* temporal){
	Binarios* temporal1=new Binarios();
	int* numeros = new int[4];
	int* listanumeros = temporal1->getArreglo();
	for (int i = 0; i < 4; ++i){
		if (numeros[i]==0&&listanumeros[i]==1)
		{
			numeros[i]=1;
		}else{
			numeros[i]=0;
		}
	}
	temporal->setArreglo(numeros);
	return temporal1;
}

Binarios* Binarios::operator/(Binarios* temporal){
	Binarios* temporal1 = new Binarios();
	int* arreglos;
	int* numeros = temporal1-> getArreglo();
	for (int i = 0; i < 4; ++i) {
		if (arreglo[i] == numeros[i]) {
			arreglos[i] = 0;
		} else {
			arregloss[i] = 1;
		}
	}
	temporal1 = setArreglo(arreglos);
	return temporal1;
}

Binarios* Binarios::operator^(Binarios* temporal){
	Binarios* temporal1 = new Binarios();
	int* arreglos;
	int* numeros = temporal1 -> getArreglo();
	for (int i = 0; i < 4; ++i) {
		if (arreglo[i] == numeros[i]) {
			arreglos[i] = 1;
		} else {
			arreglos[i] = 0;
		}
	}
}

Binarios::~Binarios(){
	delete[] arreglo;
}
