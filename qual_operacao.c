#include <stdio.h>
int main()
{
    int num1, num2, menu, result;
    float continuar;
    
    do
    {
        printf("\nQual operação deseja?");
        printf("\n1 - Adição");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        
        printf("\n\nEntre com o Opção:");
        scanf("%d", &menu);
        
        printf("Entre com o primeiro número:");
        scanf("%d", &num1);
        
        printf("Entre com o segundo número:");
        scanf("\n%d", &num2);
        
        
            switch(menu)
            {
                case 1:
                result=num1+num2;//soma
                printf("O resultado da soma é: %d + %d = %d", num1, num2, result);//ou num1, num2, num1+num2
                break;
                
                case 2:
                result=num1-num2;//soma
                printf("O resultado da subtração é: %d - %d = %d", num1, num2, result);//ou num1, num2, num1-num2
                break;
                case 3:
                result=num1*num2;//soma
                printf("O resultado da multiplicação é: %d x %d = %d", num1, num2, result);//ou num1, num2, num1*num2
                break;
                case 4:
                result=num1/num2;//soma
                printf("O resultado da divisão é: %d : %d = %d", num1, num2, result);//ou num1, num2, num1/num2
                break;
            }
            printf("\nDeseja continuar? 1-Sim/2-Não");
            scanf("\n%f", &continuar);
            
        }while(continuar==1);
        printf("\nAté mais");
    
return 0;
}