#include <stdio.h>
typedef char String[256]; // definicion del tipo String con tamaño maximo de 256

void invertir(char *str, int k)
{
	if (*(str + k) == '\0') // recorrida de los elementos del arreglo , busca el elemento final '\0'
		return; // en caso de terminar el arreglo 
	invertir(str, k + 1); //recorriendo el arreglo
	printf("%c", str[k]);
}

int main()
{
    String c1;
    printf("Escriba la cadena de carateres que desea invertir: \n");
	fgets(c1,256,stdin); // Uso del fgets en lugar de scanf, para obtener el string sin ignorar espacios
	printf("El reverso de la cadena es : ");
 	invertir(c1,0);
	return 0;
}