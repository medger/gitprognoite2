/*Você vai pedir origem (1-Rio/2-SP/3-SSA) e destino (1-Rio/2-SP/3-SSA), 
logo após, informar o valor da passagem em Real e em Dólar. Exemplo:

Olá, meu nome é Alex (Trocar aqui pelo seu nome), qual é sua origem (1-Rio/2-SP/3-SSA) ?
1
Entendi, Rio de Janeiro. Qual é seu destino (1-Rio/2-SP/3-SSA) ?
1
Ops!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino(1-Rio/2-SP/3-SSA) ?
3
Entendi, Salvador!
Valor para passagem Rio de Janeiro -> Salvador:
R$ 300.00 ou US$ 88.23
Obrigado e boa viagem!


Observações:
Considerar valor de 1 Dólar (US$) = 3.40 Reais (R$)
Valores das passagens:
Rio->SP = R$ 150,00
Rio->SSA = R$ 300,00
SP->Rio = R$160,00
SP->SSA = R$ 180,00
SSA->Rio = R$ 280,00
SSA->SP = R$ 175,00 */
#include <stdio.h>
int main()
{
    char nome[10];
    int i, destino=0, origem=0;
    printf("Qual o seu nome?");
    scanf("%s", nome);
    printf("Olá %s, qual é sua Origem?(1-Rio/2-SP/3-SSA)", nome);
    scanf("%d", &origem);
         if(origem==1){printf("\nEntendi, Rio de Janeiro");}
         if(origem==2){printf("\nEntendi, São Paulo!");}
         if(origem==3){printf("\nEntendi, Salvador");}
    printf("\nQual seu Destino?(1-Rio/2-SP/3-SSA)");
    scanf("%d", &destino);
        do{printf("Ops, seu Destino não pode ser igual sua origem. Qual seu Destino?(1-Rio/2-SP/3-SSA)");
            scanf("%d", &destino);}while(destino==origem);
        if(destino==1){printf("\nEntendi, Rio de Janeiro");}
        if(destino==2){printf("\nEntendi, São Paulo!");}
        if(destino==3){printf("\nEntendi, Salvador");}
        
        if(origem==1&&destino==2){printf("\nValor da passagem Rio de Janeiro > São Paulo é:\nR$ 150,00 (U$ 44,11)");}
        if(origem==1&&destino==3){printf("\nValor da Passagem Rio de Janeiro > Salvador é:\nR$ 300,00 (U$ 88,23)");}
        if(origem==2&&destino==1){printf("\nValor da passagem São Paulo > Rio de Janeiro é:\nR$ 160,00 (U$ 47,05");}
        if(origem==2&&destino==3){printf("\nValor da Passagem São Paulo > Salvador é:\nR$ 180,00 (U$ 52,94)");}
        if(origem==3&&destino==1){printf("\nValor da passagem Salvador > Rio de Janeiro é:\nR$ 280,00 (U$82,35");}
        if(origem==3&&destino==2){printf("\nValor da Passagem Salvador > São Paulo é:\nR$ 175,00 (U$ 51,47)");}
        
return 0;
}