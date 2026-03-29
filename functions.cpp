#include "functions.h"


int sumOfSquares(int n) 
{
    // Base case
    if (n == 0) {
        return 0;
    }
    // Recursive step
    return (n * n) + sumOfSquares(n - 1);
}

int findFactorial(int n)
{
    // Base case
    if (n == 0 or n == 1) {
        return 1;
    }
    // Recursive step
    return n * findFactorial(n - 1);
}




