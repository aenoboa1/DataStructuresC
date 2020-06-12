#include <stdio.h>
#include <stdlib.h>
/* algoritmo de busqueda-binaria (BinarySearch) */
// @andres

void lee_arreglo(int array[],int indice,int n) // paso del arreglo 
{
    if (indice<n) // cuando el indice sea menor que el fin del arreglo(tamaño)
    {
        printf("Digite el elemento: %i\n",(indice+1));
        scanf(" %d",&array[indice]);
        indice++;
        lee_arreglo(array,indice,n);
    }    
}

int Busqueda_binaria(int Array[],int inicio,int fin, int x) // donde x es el elemento a buscar 
{   // paso equivalente a int* Array
    if (inicio<=fin)
    {
    int medio = inicio + ( inicio - fin)/2;
    if (x==Array[medio])
        return medio; // retorna el elemento a buscar
    else if(x<Array[medio]) // llamada recursiva de la parte inferior
        return Busqueda_binaria(Array,inicio,medio-1,x);
    else 
        return Busqueda_binaria(Array,inicio+1,fin,x);
    }
    else return -1; // indica que el elemento no existe en el array
}

// e.g busqueda de 63
// B_B(A,0,8,63) en {2,6,13,21,36,47,63,81,97} como mid = 0+(8-0)/2 -> 4
// como 63 es mayor que 36 (mid)
// llega a la tercera condicion return B_B(A,5,8,63)
// ahora mid -> 6
// como mid A[6]=63 , se termina la funcion y retorna el resultado (6)

int main()
{
    int n,x;
    printf("Digite el tamano del array \n");
    scanf(" %d",&n);
    int *A=(int *)malloc(n*sizeof(int)*50); // array dinamico
    lee_arreglo(A,0,n);
    printf("Digite el elemento que desea buscar:");
    scanf(" %d",&x);
    int elemento= Busqueda_binaria(A,0,n-1,x);
    if (elemento ==-1)
        printf("El elemento no se encuentra en el array");
    else
        printf("El elemento se encuentra en el indice %i y tiene de valor %i ",elemento+1,A[elemento]);
    return 0;
}