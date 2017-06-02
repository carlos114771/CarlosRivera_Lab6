#ifndef BINARIOS_H
#define BINARIOS_H
#include <iostream>
#include <vector>
class Binarios{
	private:
		int* arreglo;


	public:
		Binarios();
		Binarios(int*);

		int* getArreglo(int);

		Binarios operator+(Binarios*);
		Binarios operator-(Binarios*);
		Binarios operator*(Binarios*);
		Binarios operator/(Binarios*);
		Binarios operator^(Binarios*);

		~Binarios();

};

#endif
