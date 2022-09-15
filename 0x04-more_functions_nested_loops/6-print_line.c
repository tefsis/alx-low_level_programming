#include "main.h"
/**
 *print_line - prints line followed by newline
 */
void print_line(int n)
{
int i;
while (n > 0)
{
for (i = 0; i <= n; i++)
_putchar('_');
}
_putchar('\n');
}
