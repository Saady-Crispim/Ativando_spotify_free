#include<stdio.h>
main(){
	int n1, n2, n3;
	printf("DIGITE UM NUMERO: "); scanf("%d", &n1);
	printf("DIGITE UM NUMERO: "); scanf("%d", &n2);
	printf("DIGITE UM NUMERO: "); scanf("%d", &n3);
	
    if (n1 > n2 && n2 > n3)
    {
        printf("n1: %d\n", n1);
        printf("n2: %d\n", n2);
        printf("n3: %d\n", n3);
    }
    else if (n2 > n3 && n3 > n1)
    {
        printf("n1: %d\n", n2);
        printf("n2: %d\n", n3);
        printf("n3: %d\n", n1);
    }
    else if (n3 > n1 && n1 > n2)
    {
        printf("n1: %d\n", n3);
        printf("n2: %d\n", n1);
        printf("n3: %d\n", n2);
    }
}
