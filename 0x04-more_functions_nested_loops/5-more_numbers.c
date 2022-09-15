#include "main.h"
/**
 *more_numbers - prints x10 numbers 0-14
 */
void more_numbers(void)
{
int x, y;
for (y = 0; y < 10; y++)
{
x = 0;
while (x <= 14)
{
if (x >= 10)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
x++;
}
_putchar('\n');
}
}
