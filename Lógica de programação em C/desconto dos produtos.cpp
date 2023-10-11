#include <Stdio.h>
main(){
	float p1, p2, pf1, pf2;
	printf("valor do primeiro produto antes do desconto =%f\n", p1);
	scanf("%f", &p1);
	
	printf("valor do segundo produto antes do desconto =%f\n", p2);
	scanf("%f", &p2);
	
	pf1 = p1 * 0.92;
	printf("valor do primeiro produto com desconto =%f\n", pf1);
	
	pf2 = p2 * 0.88;
	printf("valor do segundo produto com desconto =%f\n", pf2);

}
