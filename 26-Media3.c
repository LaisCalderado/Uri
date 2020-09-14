#include<stdio.h>

int main(){

    float n1, n2, n3, n4, media, exame, resultado;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3*4) + (n4*1)) / (2+3+4+1);

    printf("Media: %.1f\n", media);

    if (media < 5.0) printf("Aluno reprovado.\n");
    else if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    

    else if (media >= 5.0 || media <= 6.9){
        
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        resultado = ((media + exame) / 2);
        if(resultado > 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        
        printf("Media final: %.1f\n", resultado);
    }    

    return 0;
}

