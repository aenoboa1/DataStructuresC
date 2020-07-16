#include <stdio.h>
#include <iostream>
#include <cstdlib>

/* @Andres
Implementacion de Colas Usando Linkeds List/Listas Enlazadas
 */

struct Nodo{
    int datos;
    struct Nodo* siguiente;
};
struct Nodo* FRENTE=NULL; //Definicion de Frente y Final de la Cola
struct Nodo* FINAL= NULL;
//O(1)
void Encolar(int x)
{
    struct Nodo* temp= (struct Nodo*)malloc(sizeof(struct Nodo*)); //Asignamos memoria al Nodo
    temp->datos =x;
    temp->siguiente=NULL; 
    if(FRENTE==NULL && FINAL==NULL)
    {
        FRENTE=FINAL=temp;
        return;
    }
    FINAL->siguiente=temp;
    FINAL=temp; //Final de la Cola apunta al nuevo nodo creado
}
//O(1)
bool EstaVacia(){
    if (FRENTE==NULL)
    {
    printf("La cola se encuentra vacia\n");
    return true;
    }
    return false;
}


void DesenColar()
{
    struct Nodo* temp=FRENTE;
    if (EstaVacia())  return;
    if (FRENTE==FINAL)
    { //Cuando solo tenemos un elemento en la Cola
        FRENTE=FINAL=NULL;
    }
    else{
        FRENTE=FRENTE->siguiente;
        printf("Elemento que sale %d",temp->datos);
    }
    free(temp); //Libera de Memoria el Nodo "Desencolado"
}

void Frente_Cola()
{
    if (EstaVacia()) return;
    printf(" %d",FRENTE->datos);
    return;
}

// O(n)
void Imprimir()
{
    struct Nodo* temp=FRENTE;
    while (temp!= NULL)
    {
        printf(" %d->",temp->datos);
        temp= temp->siguiente;
    }
    printf(" NULL\n");
}



void menu1()
{
    using namespace std;
    // Todos deberan tener una complejidad constante    [ O(1) ]
    cout<<"\n\t\t QUEUES/Cola Usando Linked List            \n\n";
    cout<<" 1. ENQUEUE/Encolar            "<<endl;
    cout<<" 2. DEQUEUE/DesEncolar         "<<endl;
    cout<<" 3. DISPLAY/MOSTRAR            "<<endl;
    cout<<" 4. IsEmpty()/Esta vacia?      "<<endl;
    cout<<" 5. FRONT()/Frente De la Cola  "<<endl; 
    cout<<" 6. SALIR                      "<<endl;
    cout<<"\n INGRESE OPCION: ";
}
 
 
/*                        Funcion Principal
---------------------------------------------------------------------*/
 
int main()
{
    using namespace std;
    int op;     // opcion del menu
    int _dato;  // elemenento a ingresar
    int pos;    // posicion a insertar
    system("color 0b");
 
    do
    {
        menu1();  cin>> op; 
        switch(op)
        {
            case 1:
                cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                Encolar(_dato);
                break;
            case 2:
                DesenColar();
                break;
            case 3:
                Imprimir();
            break;  
            case 4:
                EstaVacia();
              break;
            case 5:
                Frente_Cola(); 
            break;
}
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=6);
 
 
   system("pause");
   return 0;
}