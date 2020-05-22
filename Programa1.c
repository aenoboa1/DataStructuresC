
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


CD inputCD(){
	CD myCDs;
	printf(" Introduzca el nombre del CD: \n");
	getchar();
	fgets(myCDs.titulo,256,stdin);
	printf("Introduzca el artista del CD :\n");
	fgets(myCDs.artista,256,stdin);
	puts("Introduzca el precio del CD:");
	scanf(" %f",&myCDs.precio);
	puts("Introduzca el numero de canciones del CD:");
	scanf(" %i",&myCDs.canciones);
	return myCDs;
}

void print_struct_CD(CD cd){
	printf("\n El titulo del CD: %s",&cd.titulo);
        printf("\n artista: %s",&cd.artista);
	printf("\n precio: %f\n",cd.precio);
	printf("\n Cantidad de canciones : %i\n",cd.canciones);	
}


int main(int argc,const char *argv[])
{	
	int a;
	printf(" \n Introduzca el numero de CD's que desea:");
	scanf(" %i", &a);
	CD cds[a];	
	for(int i=0;i<a;i++){
		cds[i]=inputCD();
		print_struct_CD(cds[i]);
	}
	return 0;
}
