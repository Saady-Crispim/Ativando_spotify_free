#include <stdio.h>
#include <math.h> // Importe a biblioteca math.h para usar a fun��o sqrt

int main() {
    float num1, num2, soma, raiz;
    int op_num; // Use um valor inteiro para armazenar a op��o do menu

    printf("Menu:\n");
    printf("1- Somar dois n�meros\n");
    printf("2- Raiz quadrada de um n�mero\n");
    printf("Digite sua op��o: ");
    scanf("%d", &op_num); 
	// foi deixado visivel 4 blocos consecutivos em string
	// usado para o usuario entender o que tem que fazer
	// digitar ou 1 ou 2 dependendo da sua necessidade

    if (op_num == 1) { // Use um bloco if para verificar a op��o escolhida
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &num1);

        printf("Digite o segundo n�mero: ");
        scanf("%f", &num2);

        soma = num1 + num2;
        printf("A soma dos valores �: %.2f\n", soma); 
		//".2"indica que voc� deseja exibir duas casas decimais ap�s o ponto.
    } else if (op_num == 2) { // Use "else if" para a segunda op��o
        printf("Digite um n�mero para calcular a raiz quadrada: ");
        scanf("%f", &num1);

        raiz = sqrt(num1);
        printf("A raiz quadrada do valor �: %.2f\n", raiz);
    } else {
        printf("Op��o inv�lida!\n");
    }
// usando o if foi designado 3 resultados
// se escolher (==) o numero 1, pedir� 2 numeros o qual ser�o somados
// se escolher (==) o numero 2, pedir� 1 numero o qual ser� extraido sua raiz
// se n�o escolher nenhuma das op��es sera exibida a mensagem "op��o invalida"
    return 0;
}
