#include <stdio.h>
#include<math.h>

int main(){

    float dinheiro;
    int dinheiro1, trocoMoeda;
    int trocoReal, nota100, nota50, nota20;
    int nota10, nota5, nota2;
    int moeda1, moeda50c;
    int moeda25c, moeda10c, moeda5c, moeda01c;


    scanf("%f", &dinheiro);
    
    //Transformar float em inteiro
    trocoReal = (int)dinheiro;//Aq só vai pegar a parte intera do que for digitado
    dinheiro -= trocoReal;//Aqui só a decimal
    //ex: trocoReal = 567.73
    //dinheiro = 567.73 - 567 == 00.73

    //Mostra o resultado
    //printf("Inteiro: %d\n", trocoReal);
    //printf("Moedas: %.2lf\n", dinheiro);

    nota100 = trocoReal / 100; 

    trocoReal = trocoReal - (nota100 * 100);
    nota50 = trocoReal / 50;

    trocoReal = trocoReal - (nota50 * 50);
    nota20 = trocoReal / 20;

    trocoReal = trocoReal - (nota20 * 20);
    nota10 = trocoReal / 10;

    trocoReal = trocoReal - (nota10 * 10);
    nota5 = trocoReal / 5;

    trocoReal = trocoReal - (nota5 * 5);
    nota2 = trocoReal / 2;

    trocoReal = trocoReal - (nota2 * 2);
    moeda1 = trocoReal / 1;

    trocoReal = trocoReal - (moeda1 * 1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    //printf("%d\n", trocoReal);

    trocoMoeda = (dinheiro * 100);
    //TrocoMOeda = (00.73 * 100) == 73
    //printf("%d\n", trocoMoeda);

    moeda50c = trocoMoeda / 50; //73 / 50 = 1,46 == 1
    moeda25c = (trocoMoeda % 50) /25; 
    //Moedas = 73 % 50 == 23, 23 / 25 = 0,92 == 0

    moeda10c = ((trocoMoeda % 50) % 25) / 10;
    //Moedas = 73 % 50 == 23, 23 % 25 == 23, 23 / 10 == 2

    moeda5c = (((trocoMoeda % 50) % 25) % 10) / 5;
    //Moedas = 73 % 50 == 23, 23 % 25 == 23, 23 % 10 == 3 (conta duas vezes), 3 / 5 == 0.6
    moeda01c = ((((trocoMoeda % 50) % 25) % 10) % 5) / 1;
    //Moedas = 73 % 50 == 23, 23 % 25 == 23, 23 % 10 == 3, 3 % 5 = 3, 3 / 1 == 3
   
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50c);
    printf("%d moeda(s) de R$ 0.25\n", moeda25c);
    printf("%d moeda(s) de R$ 0.10\n", moeda10c);
    printf("%d moeda(s) de R$ 0.05\n", moeda5c);
    printf("%d moeda(s) de R$ 0.01\n", moeda01c);
    return 0;
}