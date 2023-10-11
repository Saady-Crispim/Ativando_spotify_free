#include <stdio.h>
main(){
	float pre,venda,novo_pre;
printf("Digite seu preço de venda: ");
scanf("%f", &pre);  

printf("Digite sua media de venda mensal: ");
scanf("%f", &venda); 

	printf("seu preço é: = %.2f\n", pre);
	printf("seu prço de venda é: = %.2f\n", venda);
	
	if (venda < 500 and pre < 30){
		novo_pre = pre + 0.10 * pre;
	} else if (venda >= 500 and venda < 1200 or pre >= 30 and pre < 80){
		novo_pre = pre + 0.15 * pre;
	} else if (venda > 1200 or pre >= 80){
		novo_pre = pre - 0.20 * pre;
	}
	printf("seu novo preço é: = %.2f\n", novo_pre);
}
