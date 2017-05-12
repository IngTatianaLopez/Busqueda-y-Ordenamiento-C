//============================================================================
// Name        : Busqueda Binaria.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
// Description : Se utiliza cuando el vector en el que queremos determinar la existencia de un elemento está previamente ordenado. 
//Este algoritmo reduce el tiempo de búsqueda considerablemente, ya que disminuye exponencialmente el número de iteraciones necesarias. 
//Está altamente recomendado para buscar en arrays de gran tamaño
//============================================================================
#include <iostream>
using namespace std;
int numeros[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
int tamano = sizeof(numeros) /sizeof(int)
bool busquedaBinaria(int numero){
	int limiteIzquierdo = 0;
	int limiteDerecho = tamano - 1;
	int puntoMedio = 0;
	while (limiteIzquierdo <= limiteDerecho){
		puntoMedio = (limiteIzquierdo + limiteDerecho) / 2;
		if(numeros[puntoMedio] < numero){
			limiteIzquierdo = puntoMedio + 1;
		}else if(numeros[puntoMedio] > numero){
			limiteDerecho = puntoMedio -1;
		}else{
			return true;
		}
	}
}

int main() {
	int numero;
	cout <<"Busqueda Binaria\nLista\n1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50"; 


	cout<< "ingrese el numero que desee buscar" << endl;
     cin>> numero;
	 if (numero >=0){
	 cout<< "se encunetra el numero en la posicion " << numero+1 <<endl;
     }
    else
    {cout<< "el numero no se encuentra" << endl;
    
	}
	return 0;
}
