#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int n;
    printf("Introduzca el tamano del array\n");
    scanf("%d",&n);
    int *vect1 = (int*)malloc(n*sizeof(int)); //array almacenada dinamicamente donde n es el 
    if(vect1==NULL)
    {
        printf("Error, memoria no almacenada");
        exit(0);
    } 
    for (int i= 0; i < n; i++)
    {
        printf("Escriba el elemento %d del arreglo: ",(i+1));
        scanf(" %d",&vect1[i]);
    }  
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",vect1[i]); 
        printf("\n Dir de memoria:  %p \n",vect1);
      
    }
    free(vect1);
    
}