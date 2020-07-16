#include <stdio.h>
#include <iostream>
#include <cstdlib>


/* @Andres
Implementacion de Colas Usando Arrays
 */
struct Cola
{
    int Tam;
    int Frente;
    int Final;
    int *Ptr; //Puntero para acceder los elementos de la Estructura
};

void CrearCola(struct Cola *cola,int tam)
{
    cola->Tam=tam;
    cola->Frente = cola->Final = -1; // Array Vacio
    cola-> Ptr= (int *)malloc(cola->Tam*sizeof(int)); //Asignando memoria para el Array
}

bool EstaVacia(struct Cola *cola)
{
    return (cola->Final==-1 && cola->Frente==-1); 
}

bool EstaLlena(struct Cola *cola)
{
    if (cola->Final== cola->Tam-1)
        return true;
    else
        return false;
}


void Mostrar(struct Cola cola)
{
    for (size_t i = (cola.Frente+1); i <= (cola.Final); i++)
    {
        printf(" %d ",cola.Ptr[i]);
    }
}

void Encolar(struct Cola *cola, int x)
{
    if (EstaLlena(cola))
    {
        printf("Esta llena la cola \n");
        return;
    }
    else{
        cola->Final++;
        cola->Ptr[cola->Final]=x;
    }
}

void DesEncolar(struct Cola *cola)
{
    int x=-1;
    if(EstaVacia(cola))
    {
        printf("La cola esta Vacia\n");
        return;
    }else{
        cola->Frente++;
        x=cola->Ptr[cola->Frente];
    }
}

void Frente(struct Cola *cola)
{
    if (EstaVacia(cola))
    {
        printf("Esta Vacia la cola\n");
        return;
    }
    printf(" %d ",cola->Ptr[cola->Frente]);
    
}
void menu1()
{
    using namespace std;
    // Todos deberan tener una complejidad constante    [ O(1) ]
    cout<<"\n\t\t QUEUES/Cola  Usando Arrays           \n\n";
    cout<<" 1. ENQUEUE/Encolar            "<<endl;
    cout<<" 2. DEQUEUE/DesEncolar         "<<endl;
    cout<<" 3. DISPLAY/MOSTRAR            "<<endl;
    cout<<" 4. ISEMPTY()/Esta vacia?      "<<endl;
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
    struct Cola cola;
    system("color 0b");
    CrearCola(&cola,5);
 
    do
    {
        menu1();  cin>> op; 
        switch(op)
        {
            case 1:
                cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                Encolar(&cola,_dato);
                break;
            case 2:
                DesEncolar(&cola);
                break;
            case 3:
                Mostrar(cola);
            break; 
            case 4:
                if(EstaVacia(&cola))
                    printf("La cola esta vacia\n");
                else
                    printf("La cola contiene datos\n");
            break;
            case 5: 
               Frente(&cola); 
            break;
}
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=6);
 
 
   system("pause");
   return 0;
}
