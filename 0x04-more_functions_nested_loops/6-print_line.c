#include "main.h"
/**
 *print_line - prints line followed by newline
 *@n: number of times to print _ 
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
