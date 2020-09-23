#include<stdio.h>

int main(){

    int num[5], i, pares;

    for (i = 0; i < 5; i++){

        scanf("%d", &num[i]);

        if (num[i] % 2 == 0){
            pares++;
        }
        
    }
    printf("%d valores pares\n", pares);

    return 0;
    
}