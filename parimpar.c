/*Faça um programa em C para ler um numero inteiro e dizer
se é par ou impar
*/

#include <stdio.h>

int main()
{
    int num;
    {
        printf("Diga um número");
        scanf("%d", &num);
        
        if( (num % 2)==0 )//condição verdadeira
            {
                printf("\nÉ par!");
            }
        else//condição falsa
            {
                printf("\nÉ impar!");
            }
    }
return 0;
}