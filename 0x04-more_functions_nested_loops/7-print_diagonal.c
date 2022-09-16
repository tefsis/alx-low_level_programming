#include "main.h"

/**
 * print_diagonal - prints diagnol line.
 *
 * @n: number of times to print \.
 */
void print_diagonal(int n)
{
int x, y;

for (x = 1; x <= n; x++)
{
for (y = 1; y <= x; y++)
{
if (x >= 2 && y <= x - 1)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
}
if (x == n)
{
break;
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
