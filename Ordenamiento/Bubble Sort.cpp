//============================================================================
// Name        : Bubble Sort.cpp
// Author      : MICHAEL DANIEL Murillo L�pez
// iD    : 534830
// Description : es un simple algoritmo de ordenaci�n que los pasos repetidamente a trav�s de la lista para ser ordenados, 
//compara cada par de elementos adyacentes y intercambia si est�n en el orden equivocado. El paso a trav�s de la lista se repite hasta que no se necesitan permutas, 
//lo que indica que la lista est� ordenada. El algoritmo, que es una especie de comparaci�n , 
//se llama as� por la forma en elementos m�s peque�os o m�s grandes "burbuja" de la parte superior de la lista. A pesar de que el algoritmo es simple, es demasiado lento y poco pr�ctico para la mayor�a de los problemas,
//============================================================================
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int Milista[100] = {25,45,56,40,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78};
    printf("%d\nlista original:\n25,45,56,40,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78\nlista organisada:\n");
	char temp;
    
    for (int i = 0; i <100;i++) {
        for (int j = 0; j < 100 - 1; j++) {
            
            if (Milista[j] > Milista[j + 1]) {
			temp = Milista[j];
			Milista[j] = Milista[j + 1];
			Milista[j + 1] = temp;
            }
        }
   }
    for (int i = 0; i < 100; i ++) {
          printf("%d,",Milista[i]);
    }
    
  
    return 0;
}

