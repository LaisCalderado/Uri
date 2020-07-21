#include<stdio.h>
#include<stdlib.h>

int main(){

    int A, B, C, D, MaiorAB, MaiorABC;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    D = A- B;
    MaiorAB = (A + B + abs(D))/2;

    D = MaiorAB - C;
    MaiorABC = (MaiorAB + C + abs(D))/2;

    printf("%d eh o maior\n", MaiorABC);

    return 0;  
    
}