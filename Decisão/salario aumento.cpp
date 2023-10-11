#include<stdio.h>
main(){
	float sal, aum;
	printf("digite seu salário: \n");
	scanf("%f", &sal);
	if (sal > 5000){
		aum = sal*0.12;
		aum = sal+aum;
		printf("seu salario atual é %f", aum);
	}
	else{
		aum = sal*0.15;
		aum = sal+aum;
		printf("seu salario atual é %f", aum);
	}
}
