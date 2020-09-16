#include<stdio.h>

int main(){

    float salario, reajuste;
    scanf("%f", &salario);

    if (salario <= 400.00){
        reajuste = salario + (15 * salario /100);
        printf("Novo salario: %.2f\n", reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste-salario);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario <= 800.00){
        reajuste = salario + (12 * salario /100);
        printf("Novo salario: %.2f\n", reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste-salario);
        printf("Em percentual: 12 %%\n");        
    }
    else if (salario <= 1200.00 ){
        reajuste = salario + (10 * salario /100);
        printf("Novo salario: %.2f\n", reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste-salario);
        printf("Em percentual: 10 %%\n");
    }

    else if (salario <= 2000.00){
        reajuste = salario + (7 * salario /100);
        printf("Novo salario: %.2f\n", reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste-salario);
        printf("Em percentual: 7 %%\n");
    }

    else
    {
        reajuste = salario + (4 * salario /100);
        printf("Novo salario: %.2f\n", reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste-salario);
        printf("Em percentual: 4 %%\n");
    }
    


    return 0;

}