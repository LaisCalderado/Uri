#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Calcular e mostrar o volume de uma esfera

int main(){

    double Raio, Pi= 3.14159, volume;

    scanf("%lf", &Raio);

    volume = (4.0 * Pi * (pow(Raio,3)))/ 3;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}