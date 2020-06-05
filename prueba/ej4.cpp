#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 2
typedef char String[256];
// direccion completa
// direccion ciudad y provincia

struct infopersona
{
    String direccion;
    String cuidad;
    String provincia;
    long int codigo_postal;
};



typedef struct
{
    String nombre_cliente;
    struct infopersona dir_cliente;
    double saldo;
}cliente;

int main(void)
{
    cliente Personas[n];
    strcpy(Personas[0].nombre_cliente,"Andres Noboa");
    strcpy(Personas[0].dir_cliente.direccion,"Pifo");
    strcpy(Personas[0].dir_cliente.cuidad,"Quito");
    strcpy(Personas[0].dir_cliente.provincia,"Pichincha");

    strcpy(Personas[1].nombre_cliente,"Alex Aguilar");
    strcpy(Personas[1].dir_cliente.direccion,"Quinche");
    strcpy(Personas[1].dir_cliente.cuidad,"Quito");
    strcpy(Personas[1].dir_cliente.provincia,"Pichincha");
    for (int i = 0; i < n; i++)
    {
    printf("\n Cliente: %i ",(i+1));
    printf("\n Nombre %s: ",Personas[i].nombre_cliente);
    printf("\n Direccion Provincia del Cliente %s, Ciudad %s y parroquia: %s",Personas[i].dir_cliente.provincia,Personas[i].dir_cliente.cuidad,Personas[i].dir_cliente.direccion);
    }
    return 0;   

}