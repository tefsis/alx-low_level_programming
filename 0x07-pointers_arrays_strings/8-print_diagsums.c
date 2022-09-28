#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix
 *intrgers
 *@a: 2d array of int types
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 += *(a + (i * size) + j);
}
if ((i + j) == (size - 1))
{
sum2 += *(a + (i * size) + j);
}
}
}
printf("%d, %d\n", sum1, sum2);
}
