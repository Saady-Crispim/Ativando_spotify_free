#include<stdio.h>
main(){
	int nu_aul, num_fal,percentual;
	printf("digite o numero de aula: \n");
	scanf("%d", &nu_aul);
	printf("digite o numero de faltas: \n");
	scanf("%d", &num_fal);
	percentual = num_fal/nu_aul*100;
	
	if (percentual > 25){
	printf("reprovado %d");
} else{
	printf("aprovado");
}
}
