#include <stdio.h>

int main () 
{
    char produtorA[30] = "Produto A";
    char produtorB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtorA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtorB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtorA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtorB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}