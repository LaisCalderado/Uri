#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14159


int main(){

    double A, B, C, TrianRet, Circ, Trap, Quad, Ret;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    TrianRet = (A * C) / 2;
    Circ = PI * pow(C,2);
    Trap = ((A+B) * C) / 2;
    Quad = pow(B,2);
    Ret = A * B;

    printf("TRIANGULO: %.3lf\n", TrianRet);
    printf("CIRCULO: %.3lf\n", Circ);
    printf("TRAPEZIO: %.3lf\n", Trap);
    printf("QUADRADO: %.3lf\n", Quad);
    printf("RETANGULO: %.3lf\n", Ret);

    return 0;
}