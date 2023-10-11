#include<stdio.h>
main(){
	float prod, desc;
	int dia;
	printf("digite o preço do produto: \n");
	scanf("%f", &prod);
	printf("digite o dia do mês: \n");
	scanf("%f", &dia);
	if (dia<15){
		desc = prod*0.94;
		printf("valor final: %f", desc);
	}
	else{
		desc = prod*0.92;
		printf("valor final: %f", desc);
	}
}
