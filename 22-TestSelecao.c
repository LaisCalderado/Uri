#include<stdio.h>

int main(){

    int A, B, C, D;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    if (B > C){
        if (D > A){
            if ((C + D) > (A + B)){
                if (C > 0 && D > 0){
                    if (A / 2){
                        printf("Valores aceitos\n");
                    }else{
                        printf("Valores nao aceitos\n");
                    }
                    
                    
                }else{
                    printf("Valores nao aceitos\n");
                }
                
            }else{
                printf("Valores nao aceitos\n");
            }
            
        } else{
            printf("Valores nao aceitos\n");
        }
        
    } else{
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}