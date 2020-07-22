#include<stdio.h>

//Valor inteiro 
//Informe hora:minutos:segundo
//Leia em segundo

int main(){

    int valor, resto, horas, minutos, segundos;

    scanf("%d", &valor);

    resto = valor;

    horas = valor / 3600;

    resto = resto - (horas *3600 );
    minutos = resto / 60;

    resto = resto - (minutos *60 );
    

    printf("%d:%d:%d\n", horas, minutos, resto);

    return 0;
}