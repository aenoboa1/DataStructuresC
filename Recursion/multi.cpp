
// multiplicacion usando recursividad
#include <stdio.h>

int producto( int n1, int n2);

int main()
{
    int a,b;
    printf("Introduzca 2 numeros \n");
    scanf("%d%d",&a,&b);
    printf("\n Producto = %d\n", producto(a,b));
}

int producto(int n1,int n2)
{
    if( n1==0 || n2==0) //casos base
        return 0;
    if(n2==1)
        return n1;
    if(n2 >1 ) 
     return (n1+ producto(n1,n2 -1 )); //caso recursivo
     
}