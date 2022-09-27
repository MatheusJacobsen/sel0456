#include "fibonnaci.h"

// n-ésimo termo da sequência fibonacci por recursão
unsigned int fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}