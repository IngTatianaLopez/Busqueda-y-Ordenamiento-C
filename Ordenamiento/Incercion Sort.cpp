//============================================================================
// Name        : Incercion Sort.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
// Description : 
//El ordenamiento por inserción (insertion sort en inglés) es una manera muy natural de ordenar para un ser humano,
// y puede usarse fácilmente para ordenar un mazo de cartas numeradas en forma arbitraria. Requiere O(n²) operaciones para ordenar una lista de n elementos.
//Inicialmente se tiene un solo elemento, que obviamente es un conjunto ordenado. Después, cuando hay k elementos ordenados de menor a mayor, se toma el elemento k+1 y
//se compara con todos los elementos ya ordenados, deteniéndose cuando se encuentra un elemento menor (todos los elementos mayores han sido desplazados una posición a la derecha) o
// cuando ya no se encuentran elementos (todos los elementos fueron desplazados y este es el más pequeño).
//En este punto se inserta el elemento k+1 debiendo desplazarse los demás elementos.
//============================================================================
#include <stdio.h>
#define SIZE 100


void insertionSort(int*);

main()
{
	int Milista[SIZE] = {40,45,56,25,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78};
	printf("%d\nlista original:\n40,45,56,25,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78\nlista organisada:\n");
	int i = 0;
	
	insertionSort(Milista);
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d,", *(Milista + i));
	}
	
}



void insertionSort(int* sort_array)
{
	int i = 0;
	int j = 0;
	int current = 0;
	
	for (i = 1; i < SIZE; i++)
	{
		current = *(sort_array + i);
		j = i;
		
		while (*(sort_array + (j - 1)) > current && j != 0)
		{
			*(sort_array + j) = *(sort_array + (j - 1));
			j = (j - 1);
		}
		
		*(sort_array + j) = current;
		
	}
	
}
