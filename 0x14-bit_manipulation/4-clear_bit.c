#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i, j;
for (i = 0; i < 63; i++)
{
if (i == index)
{
j = 1 << i;
if ((*n & j) != 0)
{
*n = (*n ^ j);
}
return (1);
}
}
return (-1);
}
