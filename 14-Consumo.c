#include<stdio.h>

int main(){
    
    int Percorrido;
    float Combustivel;

    scanf("%d", &Percorrido);
    scanf("%f", &Combustivel);

    printf("%.3f km/l\n", Percorrido/Combustivel);
}