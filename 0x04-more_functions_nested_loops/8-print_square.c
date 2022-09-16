#include "main.h"
/**
 *print_square - prints square followed by new line
 *@size: square size
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
size--;
}
else
{
_putchar('\n');
}
}
