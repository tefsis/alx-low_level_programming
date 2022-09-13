#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
  int i;
  for (i =0; i <= 9; i++)
    {
  char alpha;
  for (alpha = 'a'; alpha <= 'z'; alpha++)
    
      _putchar(alpha);
    }
    
  _putchar('\n');
}
