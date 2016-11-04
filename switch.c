#include <stdio.h>
int main()
{
    int num;
    printf("Entre com um numero de 1 a 3:");
    
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            printf("Opção 1 escolhida!");
            break;
        case 2:
            printf("Opção 2 escolhida!");
            break;
        case 3:
            printf("Opção 3 escolhida!");
            break;
    }
    
return 0;
}