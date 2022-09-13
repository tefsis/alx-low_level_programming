#include "main.h"
#include <stdio.h>
/**
 *print_sign - checks the sighn of a number
 *@n: number  being tested
 * Return: Always 1 if 'n' is positive.
 * Return: Always 0 if 'n' is zero.
 * Return: Always -1 if 'n' is negative.
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (n == 0)
    {
      _putchar('0');
      return (0);
    }
  else if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  return (0);
}
