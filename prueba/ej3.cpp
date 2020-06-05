#include <stdio.h>
int main()
{
    int a=0;
    int *puntero;
    puntero=&a;
    printf("\n%d\n%d\n",a,*puntero);
    printf("%p",puntero);
    return 0;
}
