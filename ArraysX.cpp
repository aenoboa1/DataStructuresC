#include <stdio.h>
#include <string.h>

typedef char String[256];

void print_Array(char* C)
{
	int i=0;
	int spaces=0,letter_e=0,letter_o=0,characters=0;
	while (*(C+i)!='\0') //Uso de *(C+i) tiene el mismo comportamiento que *C
	       {
		       printf("%c",C[i]);
		       if(*(C+i)!=' ')
			       characters++;
		       else
			       spaces++;
		       if(*(C+i)=='e')
			       letter_e++;
		       if(*(C+i)=='o')
			       letter_o++;
		       i++;
	       }
        printf("\n En la cadena %s, existen: %i caracteres ,%i letras e "
			    "y %i letras o ( %i espacios). \n",C,characters,letter_e,letter_o,spaces);

}

void invertir_Cadena(char* C)
{
	int length, c;
       	char *begin, *end, temp;
   	length = strlen(C);
       	begin = C;
	end = C;
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
		end++;
	for ( c = 0 ; c < length/2 ; c++ )
	{        
      temp = *end;
      *end = *begin;
      *begin = temp;
      begin++;
      end--;
   }

}

int main()	
{
    String c1;
    printf("Introduzca el string\n");
    fgets(c1,256,stdin);
    print_Array(c1);	
    invertir_Cadena(c1);
    printf( "La cadena inversa es: %s.",c1);
    return 0;
}
