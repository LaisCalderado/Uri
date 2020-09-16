#include<stdio.h>

int main(){

    int inicio, fim, cont = 0;
    
    scanf("%d", &inicio);
    scanf("%d", &fim);
    
    do
    {
        cont++;
        inicio++;

        if (inicio == 24){
            inicio = 0;
        }
        
    } while (inicio != fim);
    
    printf("O JOGO DUROU %d HORA(S)\n", cont);
    
    
    return 0;
}