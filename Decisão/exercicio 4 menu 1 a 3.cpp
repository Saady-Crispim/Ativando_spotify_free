#include <stdio.h>

int main() {
    float op, sal, imp, aum, novo_sal;

    printf("Menu de op��es:\n");
    printf("1 - imposto\n");
    printf("2 - novo salario\n");
    printf("3 - classifica��o\n");
    printf("Digite a op��o desejada:\n");
    scanf("%f", &op);

    printf("Digite seu sal�rio:\n");
    scanf("%f", &sal); 

    if (op == 1) {
        printf("Sal�rio: %.2f\n", sal);
        
        if (sal < 500) {
            imp = sal * 0.05;
            printf("Imposto: %.2f\n", imp);
        } else if (sal >= 500 && sal <= 850) {
            imp = sal * 0.10;
            printf("Imposto: %.2f\n", imp);
        } else if (sal > 850) {
            imp = sal * 0.15;
            printf("Imposto: %.2f\n", imp);
        }
    } else if (op == 2) {
        printf("Sal�rio: %.2f\n", sal);
        
        if (sal > 1500) {
            aum = 25;
        } else if (sal >= 750 && sal <= 1500) {
            aum = 50;
        } else if (sal >= 450 && sal < 750) {
            aum = 75;
        } else if (sal < 450) {
            aum = 100;
        }
        
        novo_sal = sal + aum;
        printf("Novo sal�rio: %.2f\n", novo_sal);
    } else if (op == 3) {
        if (sal <= 700) {
            printf("Mal Remunerado\n");
        } else if (sal > 700) {
            printf("Bem Remunerado\n");
        }
    } else {
        printf("Op��o Inv�lida\n");
    }

    return 0;
}

