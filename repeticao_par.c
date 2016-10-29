//Fazer um programa em C para imprimir um numero de 0 a 50
#include <stdio.h>
int main()
{
    int cont;
        printf("Inicio da contagem...\n");
    
    for(cont=0; cont<=50; cont=cont+2) //cont++ vai de 1 em 1, cont=cont+2 vai de 2 em 2.
    
    {
        printf("%d, ", cont);
    }
    
    return 0;
}

