#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long i1 = 0, i2 = 1, k;
float l;
while (1)
{
k = i1 + i2;
if (k > 4000000)
break;
if ((k % 2) == 0)
l += k;
i1 = i2;
i2 = k;
}
printf("%.0f\n", l);
return (0);
}
