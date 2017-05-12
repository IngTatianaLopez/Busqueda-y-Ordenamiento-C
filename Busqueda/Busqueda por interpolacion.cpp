//============================================================================
// Name        :  Busqueda Por Interpolacion.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
//Descripcion:Búsqueda de interpolación es una variante mejorada de búsqueda binaria.
// Este algoritmo de búsqueda funciona en la posición de prueba del valor requerido. Para este algoritmo funcione correctamente, la recogida de datos debe estar en forma ordenada y distribuida por igual.
//============================================================================

#include<stdio.h>

#define Michael 101

//array de elementos en los que se realizará la búsqueda . 
int list[Michael] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};

int find(int data) {
   int bajo = 0;
   int alto = Michael - 1;
   int medio = -1;
   int comparacion = 1;      
   int indice = -1;

   while(bajo <= alto) {
      printf("\nComparacion %d  \n" , comparacion ) ;
      printf("bajo : %d, lista[%d] = %d\n", bajo, bajo, list[bajo]);
      printf("alto: %d, lista[%d] = %d\n", alto, alto, list[alto]);
      
      comparacion++;

      //prueba el punto medio 
      medio = bajo + (((double)( alto- bajo) / (list[alto] - list[bajo])) * (data - list[bajo]));
      printf("medio = %d\n",medio);
	  // datos encontrados 
      if(list[medio] == data) {
         indice = medio;
         break;
      } else {
         if(list[medio] < data) {
		 
		 // si los datos son mayores, los datos están en la mitad superior 
            bajo= medio + 1;
         } else {
            // si los datos son más pequeños, los datos están en la mitad inferior
            alto= medio - 1;
         }
      }               
   }
   
   printf("\nComparaciones totales realizadas: %d", --comparacion);
   return indice;
}

int main() {
   
   // encontrar la ubicación de  el numero a buscar 
   int location = find(77);
   // si se encontró el elemento
   if(location != -1)
      printf("\nElement encontrado en el lugar:%d" ,(location+1));
   else
      printf("Elemento no encontrado.");
   
   return 0;
}
