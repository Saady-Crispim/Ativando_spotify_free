#include <stdio.h>
#include <math.h> // Importe a biblioteca math.h para usar a função sqrt

int main() {
    float num1, num2, soma, raiz;
    int op_num; // Use um valor inteiro para armazenar a opção do menu

    printf("Menu:\n");
    printf("1- Somar dois números\n");
    printf("2- Raiz quadrada de um número\n");
    printf("Digite sua opção: ");
    scanf("%d", &op_num); 
	// foi deixado visivel 4 blocos consecutivos em string
	// usado para o usuario entender o que tem que fazer
	// digitar ou 1 ou 2 dependendo da sua necessidade

    if (op_num == 1) { // Use um bloco if para verificar a opção escolhida
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        soma = num1 + num2;
        printf("A soma dos valores é: %.2f\n", soma); 
		//".2"indica que você deseja exibir duas casas decimais após o ponto.
    } else if (op_num == 2) { // Use "else if" para a segunda opção
        printf("Digite um número para calcular a raiz quadrada: ");
        scanf("%f", &num1);

        raiz = sqrt(num1);
        printf("A raiz quadrada do valor é: %.2f\n", raiz);
    } else {
        printf("Opção inválida!\n");
    }
// usando o if foi designado 3 resultados
// se escolher (==) o numero 1, pedirá 2 numeros o qual serão somados
// se escolher (==) o numero 2, pedirá 1 numero o qual será extraido sua raiz
// se não escolher nenhuma das opções sera exibida a mensagem "opção invalida"
    return 0;
}
