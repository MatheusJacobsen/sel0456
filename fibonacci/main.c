#include <stdio.h>
#include "fibonacci.h"

int main(void){

// Declaração de Variáveis

unsigned int n

// Inserção de numero pelo Usuario

printf("Digite um numero inteiro: \n");
scanf("%d", &n);

// Função de Fibonacci por Recursividade

    printf("\nResultado por recursão: %d\n\n", fibonacci(n));

    return 0;
}