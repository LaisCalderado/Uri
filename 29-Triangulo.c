#include<stdio.h>

int valorAbsoluto(int x){
    if (x >= 0) return x;
    else return -x;
    
    
}

int main(){

    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if(A < B + C && B < A + C && C < B + A){
        printf("Perimetro = %.1f\n", (A+B+C));
    }
    
    else
    {
        printf("Area = %.1f\n", ((A+B)*C)/2);
    }
    
    



    return 0;
}