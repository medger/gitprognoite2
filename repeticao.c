//Fazer um programa em C para imprimir um numero de 0 a 50
#include <stdio.h>
int main()
{
    int cont;
        printf("Inicio da contagem...\n");
    
    for(cont=0; cont<=50; cont++)
    {
        printf("%d, ", cont);
    }
    
        printf("\nFim da contagem.");
    return 0;
}

