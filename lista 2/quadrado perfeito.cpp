/// Construa um programa em C para determinar se um número qualquer inteiro é um 
/// quadrado perfeito. Antes de calcular, caso o número seja negativo, multiplique-o por -1
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	int num, raiz, negativo;
	printf("saiba se o numero é um  quadrado perfeito: "); scanf("%d", &num);
	
	if (num<0){
		negativo = num * (-1);
	}	
	
    raiz = sqrt(num);
	if (raiz == num * num){
	    printf("é um quadrado perfeito\n");
	}

	else{
		printf("não é um quadrado perfeito\n\n");
	}
	
	system("pause");
}
