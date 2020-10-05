#include<stdio.h>

int main(){

    int i, x, y;
    
    while (y != -1 || x != -1){
        
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y){
            printf("Decrescente\n");
        }
        
        else if (x < y ){
            printf("Crescente\n");
        }

        else
            break;
    }
    

    return 0;
}