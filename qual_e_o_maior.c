//entre com um numero e diga qual é o maior

#include <stdio.h>
int main()
{
    int num;
    int maior=-1;
    int resposta;
    do
    {
        printf("\nEntre com um numero:");
        scanf("%d", &num);
        
        if(num>maior)
        {
            maior = num;
        }
        
        printf("\nDeseja continuar? 0=S/1=N\n");
        scanf("%d",&resposta);
        
    }while(resposta==0);
    
    printf("\nMaior numero lido = %d", maior);
return 0;
}