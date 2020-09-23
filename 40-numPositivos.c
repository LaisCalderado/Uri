#include<stdio.h>

int main(){

    float num[6];
    int i;
    int numPOsitivo = 0;

    for (i = 0; i <= 5; i++){
    /*Este laco faz o scan de cada elemento do vetor*/
        scanf("%f", &num[i]);

        if (num[i] > 0 && num[i] != 0){
            numPOsitivo++;
        }
        
    }

    printf("%d valores positivos\n", numPOsitivo);    
    

    return 0;
}