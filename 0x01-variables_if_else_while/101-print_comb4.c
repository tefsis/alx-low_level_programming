#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the various sizes of data
 *
 *Return: 0 if true
 */
int main(void)
{
  int i,j,k;
  for (i = 0; i <= 9; i++)
    {
      for (j = i+1; j <= 9; j++)
	{
	  for (k = j+1; k <= 9; k++)
	    {
	   	  putchar((i % 10) + '0');
	  putchar((j % 10) + '0');
	  putchar((k % 10) + '0'); 
	  putchar(',');
	  putchar(' ');
	}
	}
    }
  putchar('\n');
  return (0);
}
