#include <stdio.h>
int main()
{
    int idade;
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    
    if(idade>=18)
    {
        printf("\nVocê pode dirigir");
    }
    else
    {
        printf("Você não pode dirigir");
    }
}