#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>

/* Algoritmos recursivos

Búsqueda binaria (recursiva).
Recursividad en arreglos (operaciones en retroceso)

Ejercicio de deber.
Utilizando recursividad, convertir un número binario en un número decimal. 15/06/2020 */



int Convertir_Decimal(std::string binario,unsigned int i=0 )
{
    int total=0;
    if (i<binario.length())
    {
        if (binario[i]=='1') 
        {
           total = pow(2,binario.length()-1-i);
        }
        return  total+Convertir_Decimal(binario,++i);
    }
    return total;
}

int main ()
{
    std::string Num;
    printf("Introduzca el numero binario que desea convertir a decimal \n ");
    std::cin>> Num;
    int dec= Convertir_Decimal(Num);
    printf("El numero convertido a decimal: %d ",dec);
}


