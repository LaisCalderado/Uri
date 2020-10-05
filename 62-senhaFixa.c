#include<stdio.h>

int main(){

    int senha;
    senha = 0;
    
    while (senha != 2002){
        scanf("%d", &senha);

        if (senha == 2002){
            printf("Acesso Permitida\n");
            break;
        }

        else{

            printf("Senha Invalida\n");
        }
    } 

    return 0;
}