#include <stdio.h>
int main()
{
    char letra;
    printf("\nEntre com uma letra");
    scanf("\n%c", &letra);
    
   {
        if(letra=65 && letra<=90)
        {
            printf("\nEssa letra é maiuscula");
        }
        else
        {
            printf("\nEssa letra é minuscula");
        }
    }
    
return 0;
}