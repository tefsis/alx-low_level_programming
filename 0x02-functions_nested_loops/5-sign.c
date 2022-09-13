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
  
    return (1);
    putchar('+');
    }
  else if( n == 0)                                                                                                  {     
     return (0);
      putchar('0'); 
  }
 else
   
    return (-1);
    putchar('-'); 
}
