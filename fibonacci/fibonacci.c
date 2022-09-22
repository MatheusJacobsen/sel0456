#include <stdio.h>

int main(){

// Declaração de Variáveis

int n, fib = 0, a = 1, b = 1, i;

// Inserção de numero pelo Usuario

printf("Digite um numero inteiro: \n");
scanf("%d", &n);

// Função de Fibonacci por Laço

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

    printf("\n A sequencia final de Fibonacci com %d numeros: %d \n", n, fib);

    return 0;
}