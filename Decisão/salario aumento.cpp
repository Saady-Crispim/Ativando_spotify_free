#include<stdio.h>
main(){
	float sal, aum;
	printf("digite seu sal�rio: \n");
	scanf("%f", &sal);
	if (sal > 5000){
		aum = sal*0.12;
		aum = sal+aum;
		printf("seu salario atual � %f", aum);
	}
	else{
		aum = sal*0.15;
		aum = sal+aum;
		printf("seu salario atual � %f", aum);
	}
}
