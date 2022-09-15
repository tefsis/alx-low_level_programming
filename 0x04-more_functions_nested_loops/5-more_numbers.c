#include "main.h"
/**
 *more_numbers - prints number 0-14 10 times followed by newline
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
_putchar('0' + j);
}
_putchar('\n');
}
