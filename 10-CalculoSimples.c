#include<stdio.h>
//Ler o codigo das pecas (int)
//A quantidade de pecas(int)
//O valor de cada peca (float)
//Total a pagar 

int main(){

    int peca1, qtdP1;
    int peca2, qtdP2;
    float ValorP1, ValorP2, Total;

    scanf("%d", &peca1);
    scanf("%d", &qtdP1);
    scanf("%f", &ValorP1);

    scanf("%d", &peca2);
    scanf("%d", &qtdP2);
    scanf("%f", &ValorP2);

    Total = (qtdP1 * ValorP1) + (qtdP2*ValorP2);

    printf("VALOR A PAGAR: R$ %.2f\n", Total);
    
    return 0;
}