/// Construa um programa em C para determinar se um n�mero qualquer inteiro � um 
/// quadrado perfeito. Antes de calcular, caso o n�mero seja negativo, multiplique-o por -1
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	int num, raiz, negativo;
	printf("saiba se o numero � um  quadrado perfeito: "); scanf("%d", &num);
	
	if (num<0){
		negativo = num * (-1);
	}	
	
    raiz = sqrt(num);
	if (raiz == num * num){
	    printf("� um quadrado perfeito\n");
	}

	else{
		printf("n�o � um quadrado perfeito\n\n");
	}
	
	system("pause");
}
