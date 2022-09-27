#include <stdio.h>
#include "fibonnaci.h"

int main(void){

// Declaração de Variáveis

unsigned int n;

// Inserção de numero pelo Usuario

printf("Digite um numero inteiro: \n");
scanf("%d", &n);

// Função de Fibonacci por Recursividade

    printf("\n Resultado por recursão: %d\n\n", fibonnaci(n));

    return 0;
}