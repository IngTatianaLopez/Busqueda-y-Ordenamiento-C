//============================================================================
// Name        :  QuicK Sort.cpp
// Author      : MICHAEL DANIEL Murillo López
// iD    : 534830
//El ordenamiento rápido (quicksort en inglés) es un algoritmo creado por el científico británico en computación C. A. R. Hoare, basado en la técnica de divide y vencerás, que permite, en promedio,
// ordenar n elementos en un tiempo proporcional a n log n.
//============================================================================
#include <stdio.h>

void qs(int lista[],int limite_izq,int limite_der)
{
    int izq,der,temporal,pivote;

    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];

    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <=der)
        {
            temporal= lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;

        }

    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}

}

void Quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}

int main(int argc, const char * argv[])
{

    int lista[] ={40,45,56,25,18,48,27,35,30,37,91,96,67,28,73,81,47,90,51,55,9,36,64,61,74,39,89,99,21,69,17,87,8,70,53,6,20,97,3,86,52,79,82,44,1,19,2,34,11,72,85,88,15,92,16,66,24,77,33,10,49,14,13,65,76,43,68,75,71,26,84,60,41,46,94,12,7,23,22,93,38,54,50,57,100,31,83,32,5,4,63,62,80,95,58,29,42,59,98,78};
    int size = sizeof(lista)/sizeof(int);

    printf("Lista Desordenada \n");

    for (int i=0; i<size; i++) {
        printf("%d",lista[i]);
        if(i<size-1)
            printf(",");
    }

    printf("\n");
    Quicksort(lista,size);

    printf("Lista Ordenada \n");
    for (int i=0; i<size; i++) {
        printf("%d",lista[i]);
        if(i<size-1)
            printf(",");
    }

    return 0;
}
