#include <stdio.h>

long pow(long int x,long int y) // paso por valor
{
    if (y==0)
    {
        return 1; // misma condicion       
    }
    if (y%2==0)
        return pow(x*x,y/2); // si y es par entonces x^y= (x^2)^(y/2)
    else
        return x*pow(x*x,(y-1)/2); // si y es impar entonces x^y = x*(x^2)^((y-1)/2)
}

// E.G= 2^4 = 
// es par / pow(2^2,2)= 2^2 * 2^2 = 16
// pow(2^2,1)= 2^2 
// pow (2^2,0)= 1 

int main()
{
    long int x;
    long int y;
    printf("Escriba el numero a elevar , seguido de su exponente:\n");
    scanf("%d%d",&x,&y);
    printf("El resultado es %d\n",pow(x,y));
}