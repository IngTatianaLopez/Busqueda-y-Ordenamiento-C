//============================================================================
// Name        : Busqueda Lineal.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
// Description : La búsqueda lineal probablemente es sencilla de implementar e intuitiva.
// Básicamente consiste en buscar de manera secuencial un elemento, es decir, 
//preguntar si el elemento buscado es igual al primero, segundo, tercero y así sucesivamente hasta encontrar el deseado.
//============================================================================
#include <iostream>
using namespace std;

int numeros[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
int tamano = sizeof(numeros) /sizeof(int);

bool busquedaLineal(int numero){
	for(int i = 0 ; i < tamano ; i ++){
		if(numeros[i] == numero){
			return true;
		}
	}
	return false;
}
int main() {
	int numero;
	cout <<"Busqueda Binaria\nLista\n0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50"; 


	cout<< "\ningrese el numero que desee buscar" << endl;
     cin>> numero;
	 if (numero >=0){
	 cout<< "se encunetra el numero en la posicion " << numero+1 <<endl;
     }
    else
    {cout<< "el numero no se encuentra" << endl;
    
	}


	return 0;
}
