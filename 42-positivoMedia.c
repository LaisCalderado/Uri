#include<stdio.h>


int main(){

    float num[6], media, total;
    int i, positivos;

    for (i = 0; i < 6; i++){
        
        scanf("%f", &num[i]);

        if (num[i] > 0 && num[i] != 0){
            positivos++;
            total += num[i];
        }
        
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", total/positivos);
    

    return 0;
}