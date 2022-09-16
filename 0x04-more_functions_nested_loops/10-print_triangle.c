#include "main.h"
/**
 *print_triangle - prints triangle followed by new line
 *@size: triangle size
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - i - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
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
