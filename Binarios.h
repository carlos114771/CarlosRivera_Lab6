#ifndef BINARIOS_H
#define BINARIOS_H
#include <iostream>
#include <vector>
using namespace std;
class Binarios{
	private:
		int* arreglo;


	public:
		Binarios();
		Binarios(int*);

		int* getArreglo(int);
	//	void llenarArreglo();
		void* setArreglo();
		Binarios* operator+(Binarios*);
		Binarios* operator-(Binarios*);
		Binarios* operator*(Binarios*);
		Binarios* operator/(Binarios*);
		Binarios* operator^(Binarios*);

		~Binarios();

};

#endif
