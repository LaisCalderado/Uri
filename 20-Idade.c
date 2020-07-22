#include<stdio.h>
//Ler a idade da pessoa em dias
//Informar em anos, meses e dias

int main(){

    int idadeDias, anos,  meses, dias, resto;

    scanf("%d", &idadeDias);

    resto = idadeDias;

    anos = resto / 365;

    resto = resto - (anos * 365);
    meses = resto / 30;

    dias = resto - (meses * 30);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);



    return 0;
}