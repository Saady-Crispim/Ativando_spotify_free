#include <stdio.h>

main(){
    float tl, as, ef, media;

    printf("digite a nota do trabalho de laboratório: ");
    scanf("%f", &tl);
    printf("trabalho de laboratório: %.2f\n", tl);

    printf("digite a nota da avaliação semestral: ");
    scanf("%f", &as);
    printf("avaliação semestral: %.2f\n", as);

    printf("digite a nota do exame final: ");
    scanf("%f", &ef);
    printf("exame final: %.2f\n", ef);

    media = (tl * 2 + as * 3 + ef * 5) / 10;
    printf("Média ponderada: %.2f\n", media);

    if (media >= 8 && media <= 10) {
        printf("Obteve conceito A\n");
    } else if (media >= 7 && media < 8) {
        printf("Obteve conceito B\n");
    } else if (media >= 6 && media < 7) {
        printf("Obteve conceito C\n");
    } else if (media >= 5 && media < 6) {
        printf("Obteve conceito D\n");
    } else if (media >= 0 && media < 5) {
        printf("Obteve conceito E\n");
    }

getchar();
}

