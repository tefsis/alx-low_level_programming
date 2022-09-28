#include "main.h"
/**
 * is_prime -wrapper function to check for prime.
 * @n: input number.
 * @i: factor to check if n is divisible.
 * Return: 1 if prime, 0 if not else recurse.
 */
int primeFinder(int a, int i)
{
if (a <= 1 || a % i == 0)
return (0);
else if (a == i)
return (1);
else if (a > i)
primeFinder(a, i + 1);
return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 *
 * @n: the number to check
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
return (primeFinder(n, 2));
}
