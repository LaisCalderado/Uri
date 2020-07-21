#include<stdio.h>
#include<string.h>

int main() {

    char nome[100];
    double Salario, VendasPorMes;

    scanf("%s", nome);
    scanf("%lf", &Salario);
    scanf("%lf", &VendasPorMes);

    Salario = Salario + (VendasPorMes * 0.15);

    printf("TOTAL = R$ %.2lf\n", Salario);

    return 0;
}