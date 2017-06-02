#include "Binarios.h"
#include <iostream>
#include <stdlib.h>
Binarios::Binarios(){
	arreglo = new int[4];
}

Binarios::Binarios(int* barreglos){
	arreglo=barreglos;
}

int* Binarios::getArreglo(int llenar){
	srand(time(NULL));
	
	for (int i = 0; i < i<arreglo; ++i)
	{
		llenar=arreglo[i]%2;
	}
}


Binarios Binarios::operator+(Binarios*){

}

Binarios Binarios::operator-(Binarios*){
	
}

Binarios Binarios::operator*(Binarios*){
	
}

Binarios Binarios::operator/(Binarios*){
	
}

Binarios Binarios::operator^(Binarios*){
	
}

Binarios::~Binarios(){
	delete[] arreglo;
}
