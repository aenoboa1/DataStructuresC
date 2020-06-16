#include <stdio.h>
#include <stdlib.h>

// divide and conquer - divide y venceras

// Combinar las 2 arrays ordenadas
void Merge(int Array[],int lb1,int ub1,int lb2,int ub2)
{
	int i=lb1;
	int j=lb2;
	int k=0;
	int temp[20]; // Array temporal
	while(i<=ub1 && j<=ub2) // recorre los 2 arrays y en cada iteracion anade elmentos pequenos de ambos en temp
	{
		if(Array[i]<Array[j])
			temp[k++]=Array[i++];
		else
			temp[k++]=Array[j++];
	}
	while(i<=ub1) // agrega elementos a la izquierda del primer intervalo
		temp[k++]=Array[i++];
	while(j<=ub2) // agrega elementos a la derecha del segundo intervalo
		temp[k++]=Array[j++];
	for(i=0,j=lb1;j<=ub2;i++,j++) // copiar temporal al intervalo original
		Array[j]=temp[i];
}

void MergeSort(int Array[],int bajo,int alto)
{
	int medio;
	if(bajo<alto) 
	{
		medio= (alto+bajo)/2; // evita el overflow 
		MergeSort(Array,bajo,alto);
		MergeSort(Array, medio+1,alto);
		Merge(Array,bajo,medio,medio+1,alto);
	}

}

int main()
{
	int n;
	printf("Digite el tamano del array \n");
	scanf(" %d",&n);
	int *A=(int *)malloc(n*sizeof(int)*50); // array dinamico
	for(int i=0;i<n;i++)
	{
		printf("Enter %dth element:",i+1);
		scanf("%d",&A[i]);
	}	

	for (size_t i = 0; i < n; i++)
	{
	printf("%d\t",A[i]);
	}
	MergeSort(A,0,n-1);
	printf("Los elementos ordenados por MergeSort:\n");
	for (size_t i = 0; i < n; i++)
	{
	printf("%d\t",A[i]);
	}
}
