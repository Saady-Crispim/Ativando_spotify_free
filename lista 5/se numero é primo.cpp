#include<stdio.h>
int main(){
	int num, primo, lista, var, inicial, final;
	do{
		printf("selecione uma das opcoes:\n 1 = se um numero e primo\n 2 = dentre dois valores quais sao primos\n opcao: "); scanf("%d", & lista);
	}while(lista<1 || lista>2);
	if (lista==1){
		do{
			printf("digite um numero e descubra se e primo ou nao: "); scanf("%d", &num);
		}while(num<=0);
		
		primo=1; /// primo = 1 é o mesmo que primo = true
		var=2; /// menor numero par divisel
		while (var < num/2+1){
			if (num%var == 0){
				primo = 0;
				break; ///break interrompe o loop
			}
			var+=1;
		}
		if (primo == 1){
			printf("seu numero é primo");
		}
		else{
			printf("seu numero não é primo");
		}	
		
	} else{
		do{
		printf("digite o numero numero inicial: "); scanf("%d", &inicial);
		printf("digite o numero numero final: "); scanf("%d", &final);
		}while(inicial>=final || inicial<=0);
	  while (inicial <= final) {
        primo = 1; /// primo = 1 é o mesmo que primo = true
        var = 2;

        while (var < inicial/2+1) {
            if (inicial%var == 0) {
                primo = 0;/// menor numero par divisel
                break; ///break interrompe o loop
            }
            var += 1;
        } if (primo == 1) {
            printf("\n%d e primo\n", inicial);
        } else {
            printf("%d nao e primo\n\n", inicial);
        }
        var += 1; inicial += 1;
    	}
	}
}
