#include "main.h"
/**
 *_sqrt_recursion - finds the natural sqrt of a number
 *@n: integer
 *Return: n
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 *square - finds square root
 *@n: int to find sqrt
 *@i: sqrt of n
 *Return: int
 */
int square(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i < n)
return (square(n, i + 1));
else
return (-1);
}
