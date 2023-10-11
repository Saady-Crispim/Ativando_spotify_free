#include <stdio.h>

int main() {
    float vg, vgd, l;
    const int dias = 5; //const = valor fixo nomeado em variavel(dias), cujo valor atribuido é 5.

    printf("Para saber o lucro de sua empresa:\nDigite seu valor de ganho diario: ");
    scanf("%f", &vg);

    printf("Digite seu valor de gasto diario: ");
    scanf("%f", &vgd);

    l = vg * dias - vgd * dias; //5 dias da semana.
    printf("Lucro da semana: %f\n", l);

    return 0;
}

