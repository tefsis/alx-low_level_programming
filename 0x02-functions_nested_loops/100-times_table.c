#include "main.h"

/**
 * print_times_table - prints an n by n time table
 *@n:the size of the time table
 * Return: Always 0.
 */
void print_times_table(int n)
{
  int i;
  int j;
  int k;
  if ( n > 0 && n < 15)
    {
  for (i = 0; i <= n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  k = i*j;
	  if(k <= 9)
	    {
	      _putchar(k);
 _putchar(',');
   _putchar(' '); 
	    }	    
	  else
	    _putchar((k / 10) + '0');                                                                                
          _putchar((k % 10) + '0');                                                                                
          _putchar(',');                                                                                           
          _putchar(' ');
	   
	}
    }

}
}
