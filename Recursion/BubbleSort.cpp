#include <stdio.h>
#include <stdlib.h>

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
    int medio = inicio + ( fin - inicio)/2;
    if (x==Array[medio])
        return medio; // retorna el elemento a buscar
    else if(x>Array[medio]) // llamada recursiva de la parte superior
        return Busqueda_binaria(Array,inicio,medio-1,x);
    else
        return Busqueda_binaria(Array,medio+1,fin,x);
    }
    else return -1; // indica que el elemento no existe en el array
}


void intercambio(int *ptr_x,int *ptr_y)
{
    int temp= *ptr_x;
    *ptr_x=*ptr_y;
    *ptr_y=temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)      // n-1
    for (j = 0; j < n-i-1; j++)  // n-1
        if (arr[j] < arr[j+1]) // si el elemento anterior es mayor , hacer swap
            intercambio(&arr[j], &arr[j+1]); // con cada paso se divide el array en 2 partes
            // una parte ordenada y otra sin ordenar
}

// T(n) = (n-1)*(n-1)*C
// T(n)= n^2 -2n +C
// Por tanto, la complejidad es O(n^2)


int main()
{
    int n,x;
    printf("Digite el tamano del array \n");
    scanf(" %d",&n);
    int *A=(int *)malloc(n*sizeof(int)*50); // array dinamico
    lee_arreglo(A,0,n);
    for (size_t i = 0; i < n; i++)
    {
       printf(" %d \n",A[i]);
    }
    bubbleSort(A,n);
    printf("Los elementos ordenados:\n");
    for (size_t i = 0; i < n; i++)
    {
       printf("%d\n",A[i]);
    }
    printf("Digite el elemento que desea buscar:");
    scanf(" %d",&x);
    int elemento= Busqueda_binaria(A,0,n-1,x);
    if (elemento ==-1)
        printf("El elemento no se encuentra en el array");
    else
        printf("El elemento se encuentra en el indice %i y tiene de valor %i ",elemento+1,A[elemento]);
    return 0;
}
