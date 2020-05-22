#include <stdio.h>
#include <string.h>
// hacer funcion para imprimir cd//
// ingresar n cds// 
typedef char String[256];
typedef struct  
{
	     String titulo;
	     String artista;
             float precio;
             int canciones;
} CD;

void inputCD(CD *ptCD){ //Paso de estructura por direccion ( address)
	if( ptCD==NULL) 
		return;
	puts("Introduzca el titulo del CD");
	getchar();
	fgets(ptCD->titulo,256,stdin);
	puts("Introduzca el artista del CD");
	fgets(ptCD->artista,256,stdin);
	puts("Introduzca el precio del CD");
	scanf(" %f",&ptCD->precio);
	puts("Introduzca el numero de canciones en el CD");
	scanf(" %i",&ptCD->canciones);
}
void print_struct_CD(CD *ptcd){
	if ( ptcd==NULL)
		return;
	printf("\n El titulo del CD: %s",ptcd->titulo);
        printf("\n artista: %s",ptcd->artista);
	printf("\n precio: %f\n",ptcd->precio);
	printf("\n Cantidad de canciones : %i\n",ptcd->canciones);	
}


int main(int argc,const char *argv[])
{	
	int a;
	printf(" \n Introduzca el numero de CD's que desea:");
	scanf(" %i", &a);
	CD cds[a];	
	for(int i=0;i<a;i++){
		inputCD( &cds[i]);
		print_struct_CD( &cds[i]);
	}
	return 0;
}









