#include "fibonnaci.h"

// n-ésimo termo da sequência fibonacci por recursão
unsigned int fibonnaci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    return fibonnaci(n - 2) + fibonnaci(n - 1);
}