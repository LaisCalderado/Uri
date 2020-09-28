#include<stdio.h>

int main(){

    int i, cont1, n, maior, posicao;

    cont1 = 0;
    maior = 0;

    for (i = 1; i <= 100; i++){
        scanf("%d", &n);

        if (maior < n){
            maior = n;
            posicao = i;
        }
        
    }

    printf("%d\n%d\n", maior, posicao);    


    return 0;
}