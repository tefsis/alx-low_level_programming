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
  while ( n >= 0 && n < 15)
    {
  for (i = 0; i <= n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  printf("%dx%d = %d, ",j,i,i*j);
	}
        }

}
  printf("\n");
}
