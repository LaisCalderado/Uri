#include<stdio.h>

int main(){

    int num[5], i, pares = 0, impares = 0, negativos = 0, positivos = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0){
            pares ++;
        }
        else if (num[i] % 2 != 0){
            impares++;
        }

        if (num[i] > 0 && num[i] != 0){
            positivos++;
        }
        else if (num[i] < 0){
            negativos++;
        }
        
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}