#include <Stdio.h>
main(){
	float sal,sf;
	printf("digite o salario: ");
	scanf("%f", &sal);
	sf = sal * 0.85;
	sf = sf + 100;
	printf("valor final = %f", sf);
}
