#include "main.h"
/**
 *print_diagonal - prints diagonal followed by newline
 */
void print_diagonal(int n)
{
  int i;
  int j;
  for (  i = 1 ; i < = n ; i++ )
    {

      for (  j = 1 ; j < = i ; j++ )
	{

	  _putchar(' ');

	}
      _putchar('\\');
      _putchar('\n') ;

    }
  return ( 0 );

}
