//Faça um programa de 0
#include <stdio.h>
int main()
{
    int cont;
    cont=0;
    do
    {
        printf("%d, ", cont);    
        cont=cont+5; // cont++ é o numero +1, cont=(recebe) cont+X, é o numero MAIS X VEZES.
        
    }while(cont <=50);
    
    
    return 0;
}