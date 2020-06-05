#include <stdio.h>
#include <string.h>

main()
{
	char cadena[]="Fundamentos de programacion contiene punteros";
	printf("\n%c",cadena[7]);
	char *p;
	int espacios = 0, letras_e = 0, letras_o = 0, caracter = 0;
	
	p= cadena;
	while (*p!= '\0'){
		printf("\n%c",*p);
		if(*p== ' ') espacios++;
		if(*p== 'e') letras_e++;
		if(*p== 'o') letras_o++;
		if(*p!= ' ') caracter++;
		
		p++;
	}
	printf("\n En la cadena \"%s\" hay:\n", cadena);
	printf(" %i espacios\n",espacios);
	printf(" %i letras_e\n",letras_e);
	printf(" %i letras_o\n",letras_o);
	printf(" %i caracteres\n",caracter);
}