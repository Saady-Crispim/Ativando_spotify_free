///  Escreva um programa em C que leia uma idade de uma pessoa e verifique se ela é maior 
/// de idade ou não. Considere a idade mínima para ser maior de idade como 18 anos.
#include <stdio.h>
#include <stdlib.h>
main(){
	int idade;
	printf("digite sua idade em anos: "); scanf("%d", &idade);
	if (idade >= 18) printf("maior de idade\n");
	else printf("menor de idade\n");
	printf("\n--------------------------------\n\n");
	system("pause");
}
