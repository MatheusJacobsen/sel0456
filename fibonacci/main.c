#include <stdio.h>
<<<<<<< HEAD
=======
#include "fibonnaci.h"
>>>>>>> Fibonacci-Recursivo

int main(void){

// Declaração de Variáveis

<<<<<<< HEAD
int n, fib = 0, a = 1, b = 1, i;
=======
unsigned int n = 10;
>>>>>>> Fibonacci-Recursivo

// Inserção de numero pelo Usuario

printf("Digite um numero inteiro: \n");
scanf("%d", &n);

<<<<<<< HEAD
// Função de Fibonacci por Laço For

for(i=0;i<=n;i++){
    if(i == 0 || i == 1)
       fib = 1;
    else{
       fib = a + b;
       a = b;
       b = fib;
    }
    printf("\n A sequencia de Fibonacci com %d numeros: %d \n", i, fib);
}

// Resultado Final

    printf("\n A sequencia final de Fibonacci por for com %d numeros: %d \n", n, fib);
=======
// Função de Fibonacci por Recursividade

    printf("\n Resultado por recursao: %d\n\n", fibonnaci(n));
>>>>>>> Fibonacci-Recursivo

    return 0;
}