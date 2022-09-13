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
    putchar('+');
    return (1);
    else if( n > 0)                                                                                                       
      putchar('0');                                                                                                   
return (0);
 else
   putchar('-');
    return (-1);
}
