#include <stdio.h>
main() {
	int num;
  printf("digite um numero inteiro maior que : \n");
    scanf("%d", &num);
	if (num % 2 == 0){
		printf("seu numero é par");
	} else{
		printf("seu numero é impar");
	}
}
