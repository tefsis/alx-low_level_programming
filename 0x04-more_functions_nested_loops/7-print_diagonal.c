#include "main.h"
/**
 *print_diagonal - prints diagonal followed by newline
 */
void print_diagonal(int n)
{
  int i;
  int j;
  for (j = 1; j < n; j++)
    _putchar(' ');
  _putchar('\n');
  for (i = 0; i < n; i++)
    _putchar('\\');
  _putchar('\n');
}
