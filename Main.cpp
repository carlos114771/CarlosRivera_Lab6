#include "Binarios.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>



using namespace std;

int menu();

int main(){
	bool salir=false;
	int opcion;
	//int* pro;
	//Binarios* bin = new Binarios();
	while(!salir){
		switch(menu()){
			case 1:{
				int tamano = 4, numero = 2;
				int arreglo[tamano] = {0};
				srand(time(NULL));
				for (int i = 0; i < tamano; ++i ){
					arreglo[i] = rand() % numero;
				}
				cout << "Los valores del arreglo son: " << endl;
				for (int i = 0; i < tamano; ++i ) {
					cout <<"arreglo[" << i << "] = " << arreglo[i] << endl;
				}
				break;
			}
			case 2: {
				bool saliroperacion=false;
				while(!saliroperacion){
					cout<<"Menu de operaciones "<<endl
						<<"1 Disyuncion "<<endl
						<<"2 Conjuncion "<<endl
						<<"3 Implicacion "<<endl
						<<"4 Doble Implicacion "<<endl
						<<"5 Disyuncion Exclusiva "<<endl
						<<"6 Salir "<<endl;
					int subopcion;
					cout<<"Ingrese una opcion: "<<endl;
					cin>>subopcion;
					if(subopcion==1){
						
					}
					if(subopcion==2){

					}
					if(subopcion==3){

					}
					if(subopcion==4){
					
					}
					if(subopcion==5){
					
					} 
					if(subopcion==6){
						saliroperacion=true;
					}
				}
				break;
			}
			case 3: {
				salir=true;
				break;
			}
		}
	}
	return 0;
}

int menu(){
	int opcion;
	bool valido=false;
	do{
		cout<<" Menu "<<endl
			<<"1) Agregar un arreglo "<<endl
			<<"2) Tipo de operacion "<<endl
			<<"3) Salir "<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		if (opcion>0&&opcion<5){
			valido=true;
		}else{
			cout<<"opcion no valida, intente de nuevo... "<<endl;
		}
	}while(!valido);
	return opcion;
}
