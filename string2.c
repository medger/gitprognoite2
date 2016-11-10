#include <stdio.h>
int main()
{
    char nome[10];
    float av1, av2, media;
    int resposta;
    
    do
    {
        printf("Qual o seu nome?");
        scanf("%s", nome);
        printf("Qual sua av1?");
        scanf("%f",&av1);
        printf("Qual sua av2?");
        scanf("%f",&av2);
        
        printf("Ola %s, sua média é: %.2f", nome, media=(av1+av2)/2);
        
        printf("\nDeseja continuar? 0=S/1=N\n");
        scanf("%d",&resposta);
    }while(resposta==0);
    
return 0;
}