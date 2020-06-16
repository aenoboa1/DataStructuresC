#include <stdio.h>
#include <stdlib.h>
// algoritmo de insertion sort ( ordenamiento por insercion )



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



void InsertionSort(int Array[],int n)
{
	int esp,valor,pos,i;
	for(esp=1;esp<= n-1;esp++) // cantidad de espacios a recorrer
	{ //n-1 veces
		valor= Array[esp];
		pos = esp;
		i = esp -1;
		while (i >=0)
		{
			if(Array[i] < valor){ break;}
				Array[i+1]=Array[i];
				i--;
		}
		Array[i+1] =valor;
	}
}

// O(n*n)

int main()
{
    int n;
    printf("Digite el tamano del array \n");
    scanf(" %d",&n);
    int *A=(int *)malloc(n*sizeof(int)*50); // array dinamico
    lee_arreglo(A,0,n);
    for (size_t i = 0; i < n; i++)
    {
       printf("%d\t",A[i]);
    }
    InsertionSort(A,n);
    printf("Los elementos ordenados:\n");
    for (size_t i = 0; i < n; i++)
    {

       printf("%d\t",A[i]);
    }
 
}
