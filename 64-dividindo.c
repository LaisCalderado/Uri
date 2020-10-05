#include<stdio.h>

int main(){

    int n, i;
    float x, y;
    double div;

    div = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        
        scanf("%f", &x);
        scanf("%f", &y);

        if (y == 0){
            printf("divisao impossivel\n");
        }

        else{
            
            div = (double) x / y;
            printf("%.1lf\n",div);
        }
    }

    return 0;
}