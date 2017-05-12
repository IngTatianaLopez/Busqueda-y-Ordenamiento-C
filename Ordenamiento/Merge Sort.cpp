//============================================================================
// Name        :  Merge Sort.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
//Combinar tipo es un proceso de selección basado en la técnica de divide y vencerás. Con el tiempo la complejidad del peor caso de ser ? (n log n), es uno de los algoritmos más respetados.//
//============================================================================
#include <stdio.h>
#define max 100

int a[100] = { 40,45,56,25,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78};
int b[10];

void merging(int bajo, int med, int alto) {
   int l1, l2, i;

   for(l1 = bajo, l2 = med + 1, i = bajo; l1 <= med && l2 <= alto; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= med)    
      b[i++] = a[l1++];

   while(l2 <= alto)   
      b[i++] = a[l2++];

   for(i = bajo; i <= alto; i++)
      a[i] = b[i];
}

void sort(int bajo, int alto) {
   int med;
   
   if(bajo < alto) {
      med = (bajo + alto) / 2;
      sort(bajo, med);
      sort(med+1, alto);
      merging(bajo, med, alto);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("Lista Original\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nLista Desordenada\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}

