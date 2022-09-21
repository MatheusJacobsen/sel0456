#include<stdio.h>

int main(){

// Declaração de Variáveis

int n, fib = 0, a = 1, b = 1;

// Inserção de numero pelo Usuario

printf("Digite um número inteiro: \n");
scanf("%d", &n);

// Função de Fibonacci

for(i=0;i<=n,i++){
    if(i == 0 || i == 1)
       fib = 1;
    else{
       fib = a + b;
       a = b;
       b = fib;
    }
    printf("A sequencia de Fibonacci com %d numeros: %d \n", i, fib);
}

// Resultado Final

    printf("A sequencia final de Fibonacci com %d numeros: %d \n", n, fib);

    return 0;
}