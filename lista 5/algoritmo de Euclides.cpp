#include <stdio.h>

int main() {
    int a, b, temp;
    //insira dois n�meros inteiros positivos a e b, com b >= a.
    do{ 
	    printf("Digite um n�mero inteiros positivo (a): "); scanf("%d", &a);
	    printf("outro numero inteiros positivo (b): "); scanf("%d", &b);
	    //se b � maior ou igual a a. Se n�o for, solicitar ao usu�rio insirir os valores denovo.
	}while(b < a);
	
	//executar um loop while que continua enquanto b n�o for zero.
    while (b != 0) {
		//armazenar o valor de b em uma vari�vel tempor�ria chamada temp.
        temp = b;
		//b para ser igual ao resto da divis�o de a por b.
        b = a % b;
		//armazenar o valor de a = temp.
        a = temp;
    	printf("O MDC entre %d e %d\n", a, b);
    }
}
