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
j = 0;
while (j <= 14)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
j++;
}
_putchar('\n');
}
}
