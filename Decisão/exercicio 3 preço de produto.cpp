#include <stdio.h>
main(){
	float pre,venda,novo_pre;
printf("Digite seu pre�o de venda: ");
scanf("%f", &pre);  

printf("Digite sua media de venda mensal: ");
scanf("%f", &venda); 

	printf("seu pre�o �: = %.2f\n", pre);
	printf("seu pr�o de venda �: = %.2f\n", venda);
	
	if (venda < 500 and pre < 30){
		novo_pre = pre + 0.10 * pre;
	} else if (venda >= 500 and venda < 1200 or pre >= 30 and pre < 80){
		novo_pre = pre + 0.15 * pre;
	} else if (venda > 1200 or pre >= 80){
		novo_pre = pre - 0.20 * pre;
	}
	printf("seu novo pre�o �: = %.2f\n", novo_pre);
}
