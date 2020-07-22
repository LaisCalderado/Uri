#include<stdio.h>

//Dois carros em uma direção
//Carro X = 60km/h
//Carro Y = 90km/h
//Minuto          Distancia
//  1                30Km
//  2                  X


int main(){

    int distancia, tempo;

    scanf("%d", &distancia);

    tempo = distancia * 2;

    printf("%d minutos\n", tempo);


    return 0;
}