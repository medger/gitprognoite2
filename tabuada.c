#include <stdio.h>
//multiplicação
int main()
{
    int num;
    printf("A tabuada do 5 é:");
    for (num=0;num<=10;num++)
    {
        printf("\n5 x %d = %d",num, num*5);
    }
    
     printf("\n\nA soma de 5 é:");
    for (num=0;num<=10;num++)
    {
        printf("\n%d + %d = %d",5, num, 5+num);
    }
return 0;
}
