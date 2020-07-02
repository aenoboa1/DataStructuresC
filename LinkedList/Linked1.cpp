#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 512

typedef struct snodo{ //snodo es el nombre de la estructura
    char valor[MAX];
    struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
}tnodo; //tnodo es el tipo de dato para declarar la estructura
 
typedef tnodo *tpuntero; //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 
void insertarEnLista (tpuntero *cabeza,const char *element);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);

int main(){
    char val[MAX];
    int seleccion;
    tpuntero cabeza; //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL; //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
	printf("  Menu de ingreso de Datos\n");
        printf( "  ====================================\n");
        printf( "  1.  Ingrese una cadena de caracteres\n");
        printf( "  2.  Imprima la lista guardada\n");
        printf( "  3.  Borre la lista\n");
        printf( "  4.  Salir\n");

    do{
	scanf("%d",&seleccion);
	switch(seleccion){
		case 1:
		printf("Porfavor ingrese la cadena de caracteres:");
		scanf("%s",val);	
		insertarEnLista (&cabeza, val);
		printf ("Ingresado correctamente");
		printf ("\n");
		    break;
		case 2:
		printf ("\nSe imprime la lista cargada: \n");
	    imprimirLista (cabeza);
		printf ("\n");
		    break;
		case 3:
		printf ("\nSe borra la lista cargada\n");
		borrarLista (&cabeza);     
		printf ("\n");
		    break;
		case 4:
	 	    return 0;
	}
	} while( seleccion != -1);
	return 0;
}

void insertarEnLista (tpuntero *cabeza, const char  *element){
    tpuntero nuevo; //Creamos un nuevo nodo
    nuevo = (tnodo*) malloc(sizeof(tnodo)); //Utilizamos malloc para reservar memoria para ese nodo
    strcpy(nuevo->valor,element); //Le asignamos el valor ingresado por pantalla a ese nodo
    nuevo->sig = *cabeza; //Le asignamos al siguiente el valor de cabeza
    *cabeza = nuevo; //Cabeza pasa a ser el ultimo nodo agregado
}
 
void imprimirLista(tpuntero cabeza){
    while(cabeza != NULL){ //Mientras cabeza no sea NULL
        printf("%2s",cabeza->valor); //Imprimimos el valor del nodo
        cabeza = cabeza->sig; //Pasamos al siguiente nodo
	}    
}
 
void borrarLista(tpuntero *cabeza){ 
    tpuntero actual; //Puntero auxiliar para eliminar correctamente la lista  
    while(*cabeza != NULL){ //Mientras cabeza no sea NULL
        actual = *cabeza; //Actual toma el valor de cabeza
        *cabeza = (*cabeza)->sig; //Cabeza avanza 1 posicion en la lista
        free(actual); //Se libera la memoria de la posicion de Actual (el primer nodo), y cabeza queda apuntando al que ahora es el primero
    }
}		
