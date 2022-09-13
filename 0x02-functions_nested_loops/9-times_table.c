#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
  int i;
  int j;
  int k;
  for (i = 0; i <= 9; i++)
    {
      for (j = 0; j <= 9; j++)
	k = i*j;
      _putchar(k + '0');
      if (j == 9)
	continue;
	  _putchar(',');
      _putchar(' ');
    }
  _putchar('\n');
}
