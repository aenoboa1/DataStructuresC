#include <stdio.h>
#include <string.h>

void print_Array(char* C)
{
    int i=0;
    int spaces=0,letter_e=0,letter_o=0,characters=0;
    while (*(C+i)!='\0')
    {
        printf("%c",C[i]);
        if(*(C+i)!=' ')
            characters++;
        if(*(C+i)!='e')
            letter_e++;
        if(*(C+i)!='o')
            letter_o++;
        i++;
    }

    printf("\n En la cadena %s, existen: %i caracteres ,%i letras e "
    "y %i letras o. \n",C,characters,letter_e,letter_o);
}

int main()
{
    char C1[9]="Hello";
    print_Array(C1);
}
