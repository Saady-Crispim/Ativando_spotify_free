#include <stdio.h>
int main() {
	float altp, lagp, altt, lagt, x1, x2, area;
	printf("para medir a quantidade de tijolos necessarios digite em centimetros\n altura da parede:");
	scanf("%f", &altp);
	
	printf("largura da parede: ");
	scanf("%f", &lagp);
	
	printf("altura do tijolo: ");
	scanf("%f", &altt);
	
	printf("largura do tijolo: ");
	scanf("%f", &lagt);
	
	x1 = altp * lagp;
	x2 = altt * lagt;
	area = x1/x2;
	
	printf("quantidade de tijolos necessarios: %f", area); // o que for deixar visivel que não seja string deve-se denominar a variavel
}
