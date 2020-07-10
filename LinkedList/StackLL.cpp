#include <stdio.h>
#include <stdlib.h>
//@Andres
// LIFO- LAST IN FIRST OUT
struct Node {
    char data;
    struct Node* link;
};

struct Node* Top= NULL;

// O(1)
void Push(char x){
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->link=Top; // next pointer of temp now points to NULL if list is empty
    // or to the node after it , otherwise
    Top=temp; // The top pointer now points to temp node
}

// O(1)
void Pop()
{
    struct Node* temp;
    if(Top ==NULL)
     { 
        printf("\n Stack Vacio\n");
        return;
    }   
    else{
    temp=Top; // top now points to the start of the linked list
    Top=Top->link;
    free(temp);
    printf("Item sacado de Top\n");
    }
}
void Display()
{
    struct Node* ptr;
    ptr=Top;
    if(ptr==NULL)
    {
        printf("Stack Vacio\n");
    }
    else
    {
        printf("Mostrando los elementos de la pila\n");
        while(ptr!=NULL)
        {
            printf("%c->",ptr->data);
            ptr=ptr->link;
        }
        printf("NULL\n");



    }


}

int main()
{
     char c;
     int choice=0;     
    printf("\n*********Operaciones de Stack Usando Linked List*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nDe las Siguientes opciones escoja ...\n");  
        printf("\n1.Push\n2.Pop\n3.Mostrar\n4.Salir");  
        printf("\n Introduzca su opcion \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                
                printf("Escriba el caracter que desea introducir \n");
                scanf(" %c",&c);
                Push(c);
                break;  
            }  
            case 2:  
            {  
                Pop();  
                break;  
            }  
            case 3:  
            {  
                Display();  
                break;  
            }  
            case 4:   
            {  
                printf("Saliendo....");  
                break;   
            }  
            default:  
            {  
                printf("Introduzca una opcion valida \n ");  
            }   

            }

    }

}
