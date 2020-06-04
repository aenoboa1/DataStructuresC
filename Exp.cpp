// condiciones para la exponenciacion
// X^y = x * x * x * x ..... (y veces) o x^y= (x*x*x*x*x .... * y-1 veces)*x
// si (y==0)
// retornar 1


#include <stdio.h>

int exponencial(int x,int y) // paso por valor
{
    if (y==0)
    {
        return 1;       
    }
    printf(" %d\n",exponencial(x,y-1)*x);
    return exponencial(x,y-1)*x;
}

// E.G= 2^2 = 
// -- exponencial (2,2-1) *2 = 1*2*2 =4
// -- exponencial (2,1-1) *2 = 1*2
//
int main()
{
    int x;
    int y;
    printf("Escriba el numero a elevar , seguido de su exponente:\n");
    scanf("%d%d",&x,&y);
    printf("El resultado es %d\n",exponencial(x,y));
}