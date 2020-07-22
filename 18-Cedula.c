#include<stdio.h>

//Ler um valor inteiro 
//Calcule o menor número de notas possíveis (cédulas)
//são de 100, 50, 20, 10, 5, 2 e 1


int main(){

    int troco,valor, rest100, rest50, rest20, rest10, rest5, rest2, rest1;

    scanf("%d", &valor);
    
    troco = valor; //Troco == 576
    rest100 = troco / 100;// Rest10 = 576 / 100 = 5,76
    //Rest100 == 5
    
    troco = troco - (rest100 * 100); //Troco = 576 - (5 * 100)
    //Troco = 576 - 500 = Troco == 76
    rest50 = troco / 50;// Rest50 = 76 / 50 = 1,26 Rest50 == 1

    //Troco = 76 - (1 * 50) == 26
    troco = troco - (rest50 * 50);
    rest20 = troco / 20; //Rest20 = 26 / 20 = 1,6 == 1

    //Troco = 26 - (1 * 20) == 6
    troco = troco -(rest20 * 20);
    //Rest10 = 6 / 10 = 0.6 == 0
    rest10 = troco / 10;

    //Troco = 6 - (0 * 10) == 6
    troco = troco - (rest10 * 10);
    //Rest5 = 6 / 5 = 1.1 == 1
    rest5 = troco / 5;

    //Troco = 6 - (1 * 5) == 1
    troco = troco - (rest5 * 5);
    //Rest1 = 1 / 1 == 1
    rest1 = troco / 1;
    //Troco = 1 - (1 * 1) ==0
    troco = troco - (rest1 * 1);

    printf("%d nota(s) de R$ 100,00\n", rest100);
    printf("%d nota(s) de R$ 50,00\n", rest50);
    printf("%d nota(s) de R$ 20,00\n", rest20);
    printf("%d nota(s) de R$ 10,00\n", rest10);
    printf("%d nota(s) de R$ 5,00\n", rest5);
    printf("%d nota(s) de R$ 1,00\n", rest1);

    return 0;
}

