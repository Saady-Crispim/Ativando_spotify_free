/// Calcule e mostre as ra�zes reais de uma fun��o polinomial de segundo grau.
#include <stdio.h>
#include <stdlib.h>
main(){
	int a, b, c, x;
	printf("para saber as raizes de uma fun��o de segundo grau\n Digite os coeficientes a, b e c, respectivamente\n obs: a != 0\n coeficientes: \n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	x = b*x - a**2 + c;
	printf("X=", x);
}
