#include <stdio.h>
#include<stdlib.h>

/* Programa que realiza la impresion, escaneo de datos y sumatoria de un arreglo de manera recursiva */
// @andres

void lee_arreglo(int array[],int indice,int n) // paso del arreglo como argumento
{
    if (indice<n) // cuando el indice sea menor que el fin del arreglo(tamaño)
    {
        printf("Digite el elemento: %i\n",(indice+1));
        scanf(" %d",&array[indice]);
        indice++;
        lee_arreglo(array,indice,n);
    }    
}
void imprimirInverso(int array[],int Inicio,int fin)
{
    if (Inicio >=fin ) // mientras que no se llegue al final
    {
            printf(" %d ",array[Inicio]); /* posicion indicada por el arreglo */
            Inicio--; //reduce el tamano del arreglo hasta llegar a 0
            imprimirInverso(array,Inicio,fin); 
    }
    
}


int suma_arreglo(int array[],int indice,int n,int &suma){ //paso por referencia y no puntero

    if (indice < n) //condicion inicial
    {
        suma += array[indice];
        indice++;
        suma_arreglo(array,indice,n,suma); 
        return suma; // retorna el valor de la sumatoria
    }
}

int main()
{
    int n,s=0;
    printf("Digite el tamano del array \n");
    scanf(" %d",&n);
    int *A=(int *)malloc(n*sizeof(int)*50);
    lee_arreglo(A,0,n); // donde n es el tamaño del arreglo
    printf("La sumatoria del arreglo es: %i\n",suma_arreglo(A,0,n,s));    
    imprimirInverso(A,n-1,0); // dimension del arreglo sin contar '\0' , manda el final
}