//============================================================================
// Name        : Bubble Sort.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
// Description : es un simple algoritmo de ordenación que los pasos repetidamente a través de la lista para ser ordenados, 
//compara cada par de elementos adyacentes y intercambia si están en el orden equivocado. El paso a través de la lista se repite hasta que no se necesitan permutas, 
//lo que indica que la lista está ordenada. El algoritmo, que es una especie de comparación , 
//se llama así por la forma en elementos más pequeños o más grandes "burbuja" de la parte superior de la lista. A pesar de que el algoritmo es simple, es demasiado lento y poco práctico para la mayoría de los problemas,
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

