#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
i = (i % 10);
if (i < 0)
  i = -i;
_putchar(i + '0');
}
return (i);
}
