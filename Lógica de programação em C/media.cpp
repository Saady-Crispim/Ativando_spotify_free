#include <Stdio.h>
main(){
	float n1, n2, n3, med;
	printf("digite sua 1. mencao: ");
	scanf("%f",&n1);
	printf("digite sua 2. mencao: ");
	scanf("%f",&n2);
	printf("digite sua 3. mencao: ");
	scanf("%f",&n3);
	n1 = n1 * 0.25;
	printf("primeira mencao: = %f\n", n1);
	n2 = n2 * 0.35;
	printf("segunda mencao: = %f\n", n2);
	n3 = n3 * 0.45;
	printf("terceira mencao: = %f\n", n3);
	med = n1 + n2 + n3;
	printf("media: %f\n", med);
}
