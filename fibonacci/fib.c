#include "fibonacci.h"
#include <stdio.h>

// Função Recursiva para Fibonacci com n numeros
unsigned int fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    return n + fibonacci(n - 1);
}