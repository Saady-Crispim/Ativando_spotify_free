#include <stdio.h>

int main() {
    int a, b, temp;
    //insira dois números inteiros positivos a e b, com b >= a.
    do{ 
	    printf("Digite um número inteiros positivo (a): "); scanf("%d", &a);
	    printf("outro numero inteiros positivo (b): "); scanf("%d", &b);
	    //se b é maior ou igual a a. Se não for, solicitar ao usuário insirir os valores denovo.
	}while(b < a);
	
	//executar um loop while que continua enquanto b não for zero.
    while (b != 0) {
		//armazenar o valor de b em uma variável temporária chamada temp.
        temp = b;
		//b para ser igual ao resto da divisão de a por b.
        b = a % b;
		//armazenar o valor de a = temp.
        a = temp;
    	printf("O MDC entre %d e %d\n", a, b);
    }
}
