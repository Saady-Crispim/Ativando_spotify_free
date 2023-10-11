///Faça um programa em C para calcular quanto a prefeitura de uma cidade precisa investir 
///por habitante, baseado em um valor base, digitado pelo usuário. Se a cidade tiver mais 
///de 10000 habitantes precisa investir, por cidadão, o valor base aumentado em 20%; caso 
///contrário, pode investir o valor base aumentado em 15%
#include <stdio.h>
#include <stdlib.h>
main(){
	int hab;
	float inv, valor, total;
	printf("digite o numero de habitantes de sua cidade: "); scanf("%d", &hab);
	printf("digite o valor base: "); scanf("%f", &valor);
	if (hab > 10000){
		inv = valor*1.20;
		total = inv*hab;
		printf("\n o investimento por habitante é: %.2f\n", inv);
		printf("\n o investimento total é: %.2f", total);
	}else{
		inv = valor*1.15;
		total = inv*hab;
		printf("\n o investimento por habitante é: %.2f", inv);
		printf("\n o investimento total é: %.2f\n\n", total);
	}
	system("pause");
}
