#include "main.h"
/**
 * print_alphabet_x10 -  prints the alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
  int chr;
  int i;

  for (i = 0; i <= 9; i++)
  
      for (chr = 'a'; chr <= 'z'; chr++)
	{
	  _putchar(chr);
	  _putchar('\n'); 
	}
    
      
    
}
