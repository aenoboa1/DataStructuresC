#include <stdlib.h>
#include <stdio.h>

double getPromedio(int arr[], int size) {
   int i, sum = 0;       
   double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

    int max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    printf("\n El elemento mayor es: %d \n ",max);
    int min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];

    }
        
    printf("\n El elemento menor es: %d \n ",min);
   return avg;
}

int main()
{
    int n;
    printf("Introduzca el tamano del array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int)); //array almacenada dinamicamente donde n es el tamaño
    if(A==NULL)
    {
        printf("Error, memoria no almacenada");
        exit(0);
    }   
   
    for (int i= 0; i < n; i++)
    {
       A[i]=i+1;  
    }  
    for (int i= 0; i < n; i++)
    {
        printf("%d ",A[i]);  
    }
    double avg=getPromedio(A,n);
    printf("\n El promedio del array es: %.2f",avg);

}