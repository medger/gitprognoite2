//Fazer o quadrado de um numero

#include <stdio.h>
int main()
{
    int num, quad;
    
    for(num=1; num<=10; num++)
    {
        quad = num*num;
        printf("\nO quadrado de %d é %d", num, quad); //ou pode-se colocar num*num ao invés de declarar a var quad=num*num
        
    }
return 0;
}