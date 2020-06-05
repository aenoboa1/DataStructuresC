#include <stdio.h>
#include <stdlib.h>

// caso 1: Si 0/8
    // if (x<y)
        // residuo 0 =x

// caso 2: Si 9/4=2 residuo 1
    // 9-4 =5 contador=1
    // 5-4 =1 contador =2
    // 1-4= -3(x<y), por tanto el residuo =1 (x)

unsigned division(unsigned x,unsigned y) // 
{
    
    if (x<y)
    {                                 //realiza la impresion del residuo
        printf("El residuo es %d\n",x);
        return 0;
    }
    return 1 + division(x-y,y); 
}

int Dividir_signo(int x, int y)
{
    if (y==0)
    {
        printf("Error!! division por 0");
        exit(1);
    }
    int signo=1; // variable de tipo entera para guardar el signo (-1) y (1)
    if (x*y<0) // se obtiene el signo de la division
    {
        signo=-1;
    }
    return signo* division(abs(x),abs(y)); // llama a la funcion recursiva
    // guardando el signo respectivo
}  

int main(void)
{
    int dividendo;
    int divisor;
    printf("Escriba los 2 numeros a dividir\n");
    scanf("%d%d",&dividendo,&divisor);
    printf("El resultado es %d\n",Dividir_signo(dividendo,divisor));
    return 0;
}





