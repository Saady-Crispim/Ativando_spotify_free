#include<stdio.h>
main(){
	int num;
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &num);
	if (num > 0){
		printf("seu numero � positivo");
	} else{
		printf("seu numero � negativo");
	}
}
