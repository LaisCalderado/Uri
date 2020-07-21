#include<stdio.h>

int main(){

    int numFunc, HTrab;
    float ValorHora, salario;
    
    scanf("%d", &numFunc);
    scanf("%d", &HTrab);
    scanf("%f", &ValorHora);

    salario = ValorHora* HTrab;

    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", salario);


    return 0;
}