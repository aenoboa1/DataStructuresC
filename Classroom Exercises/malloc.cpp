#include <stdio.h>   
#include <stdlib.h> 
 
int main(void) 
{
   int n;
    printf("Introduzca el tamano del array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int)); //array almacenada dinamicamente donde n es el 
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
}