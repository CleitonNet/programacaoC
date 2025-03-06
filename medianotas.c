#include <stdio.h>

int main () 
{
    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    // printf("A média é: %.1f\n", media);
    printf("A média de %d, %d e %d é: %.1f\n", nota1, nota2, nota3, media);

    return 0;
}