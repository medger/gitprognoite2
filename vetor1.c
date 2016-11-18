/*fazer um programa em C para ler a av1 de 10 alunos
calcular e imprimir a média, como no exemplo:
Entre com a av1 do aluno 1: 6.6
Entre com a av1 do aluno 2: 5.6
...
Entre com a av1 do aluno 10: 9.6
*/
#include <stdio.h>
int main()
{
    float av1[10], media, soma=0;
    int i;
    
    for(i=0;i<=9;i++)
    {
        printf("\nEntre com a AV1 do aluno %d:", i+1);
        scanf("%f", &av1[i]);
        soma=soma+av1[i];
    }
     media=soma/10;
    printf("A media da turma é %.2f", media);
    
    printf("\nAlunos com notas >= a media");
    for(i=0;i<=9;i++)
    {
        if(av1[i] >= media)
        {
            printf("\nAlunos = %d -> Nota = %f", i, av1[i]);
        }
    }
   
return 0;
}