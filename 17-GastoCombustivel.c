#include<stdio.h>

//Faz 12KM/L 
//Fornecer o tempo gasto da viagem (em horas)
//E a velocidade media durante a viagem (em KM/H)


int main(){

    int VelMedia, Tempo;
    float Litros;

    scanf("%d", &Tempo);
    scanf("%d", &VelMedia);

    Litros = (VelMedia * Tempo) / 12.0;

    printf("%.3f\n", Litros);


    return 0;
}